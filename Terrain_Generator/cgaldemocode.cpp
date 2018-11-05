//#include "cgaldemocode.h"

//#include <CGAL/IO/io.h>
//#include <CGAL/IO/io_impl.h>
//#include <CGAL/IO/io_tags.h>
//#include <CGAL/assertions_behaviour.h>
//#include <CGAL/assertions_impl.h>

//#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
//#include <CGAL/Triangulation_3.h>



//#include <iostream>
//#include <fstream>
//#include <cassert>
//#include <list>
//#include <vector>

//typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
//typedef CGAL::Triangulation_3<K>      Triangulation;
//typedef Triangulation::Cell_handle    Cell_handle;
//typedef Triangulation::Vertex_handle  Vertex_handle;
//typedef Triangulation::Vertex_iterator  Vertex_iterator;
//typedef Triangulation::Locate_type    Locate_type;
//typedef Triangulation::Point          Point;



//CGALDemoCode::CGALDemoCode()
//{

//}

//void CGALDemoCode::Run3DTriangulationDemo()
//{

//    // construction from a list of points :
//     std::list<Point> L;
//     L.push_front(Point(0,0,0));
//     L.push_front(Point(1,0,0));
//     L.push_front(Point(0,1,0));
//     L.push_front(Point(1,1,0));
//     L.push_front(Point(0,0,1));
//     L.push_front(Point(0,1,1));
//     L.push_front(Point(1,0,1));
//     L.push_front(Point(1,1,1));

//     Triangulation T(L.begin(), L.end());
//     Triangulation::size_type n = T.number_of_vertices();


////     // insertion from a vector :
////     std::vector<Point> V(3);
////     V[0] = Point(0,0,1);
////     V[1] = Point(1,1,1);
////     V[2] = Point(2,2,2);

////     n = n + T.insert(V.begin(), V.end());

////     assert( n == 6 );       // 6 points have been inserted
//     assert( T.is_valid() ); // checking validity of T



//                //     Locate_type lt;
//                //     int li, lj;
//                //     Point p(0,0,0);
//                //     Cell_handle c = T.locate(p, lt, li, lj);
//                //    // p is the vertex of c of index li :
//                //     assert( lt == Triangulation::VERTEX );
//                //     assert( c->vertex(li)->point() == p );

//                //     Vertex_handle v = c->vertex( (li+1)&3 );
//                //     // v is another vertex of c
//                //     Cell_handle nc = c->neighbor(li);
//                //     // nc = neighbor of c opposite to the vertex associated with p
//                //     // nc must have vertex v :
//                //     int nli;
//                //     assert( nc->has_vertex( v, nli ) );
//                //     // nli is the index of v in nc

//     std::ofstream oFileT("output",std::ios::out);
//     // writing file output;
//     oFileT << T;





//     std::vector<Vertex_handle> TV(n+1);
//     Triangulation::size_type i = 0;

//     // write the vertices
//     for(Vertex_iterator it = T.vertices_begin(), end = T.vertices_end(); it != end; ++it)
//       TV[i++] = it;

//     CGAL_triangulation_assertion(i == n+1);
//     CGAL_triangulation_assertion(T.is_infinite(TV[0]));

//     CGAL::Unique_hash_map<Vertex_handle, std::size_t > V;
//     V[T.infinite_vertex()] = 0;
//     for(i=1; i <= n; i++)
//     {
//        std::cout << *TV[i] << std::endl;
////       os << *TV[i];
//        V[TV[i]] = i;
//       //if(is_ascii(os))
//        // os << std::endl;
//     }










////     Triangulation::Vertex_iterator iter;

////     //    T.vertices_begin()

////     for(iter = T.finite_vertices_begin(); iter != T.vertices_end(); iter++)
////     {


////     }






//     Triangulation T1;
//     std::ifstream iFileT("output",std::ios::in);
//     // reading file output;
//     iFileT >> T1;
//     assert( T1.is_valid() );
//     assert( T1.number_of_vertices() == T.number_of_vertices() );
//     assert( T1.number_of_cells() == T.number_of_cells() );


//}
