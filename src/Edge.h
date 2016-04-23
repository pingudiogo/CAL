/*
 * Edge.h
 *
 */

#ifndef SRC_EDGE_H_
#define SRC_EDGE_H_

#include <vector>

namespace std {

template<class T> class Graph;
template<class T> class Vertex;

template<class T>
class Edge {
	Vertex<T> * dest;
	double weight;
public:
	Edge(Vertex<T> *d, double w);
	friend class Graph<T> ;
	friend class Vertex<T> ;
};

} /* namespace std */

#endif /* SRC_EDGE_H_ */