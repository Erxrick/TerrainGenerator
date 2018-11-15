#define CAPSTONE_APPLICATION_CODE
//#define RUN_DEMO_CODE_TRIANGULATION
//#define POISSION_RECONSTRUCTION_EXAMPLE

#ifdef CAPSTONE_APPLICATION_CODE
    #include "mainwindow.h"
    #include "window_primary.h"
    #include <QApplication>
    #include <QOpenGLWidget>
#endif

#ifdef RUN_DEMO_CODE_TRIANGULATION
#include "cgaldemocode.h"
#endif

#ifdef POISSION_RECONSTRUCTION_EXAMPLE
#define CGAL_EIGEN3_ENABLED
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/poisson_surface_reconstruction.h>
#include <CGAL/IO/read_xyz_points.h>
#include <vector>
#include <fstream>
// Types
typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef Kernel::Point_3 Point;
typedef Kernel::Vector_3 Vector;
typedef std::pair<Point, Vector> Pwn;
typedef CGAL::Polyhedron_3<Kernel> Polyhedron;
#endif


int main( int argc, char **argv )
{


#ifdef POISSION_RECONSTRUCTION_EXAMPLE
    {


  std::vector<Pwn> points;
  std::ifstream stream("kitten.xyz");
  if (!stream ||
      !CGAL::read_xyz_points(
           stream,
           std::back_inserter(points),
           CGAL::parameters::point_map(CGAL::First_of_pair_property_map<Pwn>()).
           normal_map(CGAL::Second_of_pair_property_map<Pwn>())))
    {
      std::cerr << "Error: cannot read file kitten.xyz" << std::endl;
      return EXIT_FAILURE;
    }
  Polyhedron output_mesh;

  double average_spacing = CGAL::compute_average_spacing<CGAL::Sequential_tag>
    (points, 6, CGAL::parameters::point_map(CGAL::First_of_pair_property_map<Pwn>()));
  if (CGAL::poisson_surface_reconstruction_delaunay
      (points.begin(), points.end(),
       CGAL::First_of_pair_property_map<Pwn>(),
       CGAL::Second_of_pair_property_map<Pwn>(),
       output_mesh, average_spacing))
    {
        std::ofstream out("kitten_poisson-20-30-0.375.off");
        out << output_mesh;
    }
  else
    return EXIT_FAILURE;
  return EXIT_SUCCESS;
    }
#endif


#ifdef RUN_DEMO_CODE_TRIANGULATION
    {

    CGALDemoCode::Run3DTriangulationDemo();
    return 0;
    }
#endif


#ifdef CAPSTONE_APPLICATION_CODE
    {
    QApplication a(argc, argv);
    Window_Primary w;
    w.show();


    return a.exec();
    }
#endif


    //Return an error code due to not runnning anything useful
    return 1;
}





