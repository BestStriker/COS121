#ifndef LISTASVECTOR_H
#define LISTASVECTOR_H
#include "ListAsArray.h"
#include <iostream>
#include <vector> ///STL Container
#include <algorithm> ///STL Algorithm
using namespace std;
class ListAsVector : ListAsArray
{
  /**
  * @param creates a vector myList of type container
  */
  vector<container> myList;
public:
  /**
  * @param change the size of the vector
  */
  void initVector(int size);
  /**
  * @param inserts a container on the back of the vector
  */
  void insert(container i);
};

#endif
