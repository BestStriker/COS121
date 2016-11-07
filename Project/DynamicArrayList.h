#ifndef DYNAMICARRAYLIST_H
#define DYNAMICARRAYLIST_H
#include "ListAsArray.h"
class DynamicArrayList : ListAsArray
{
  /**
  * @param dynamic array of type container pointer
  */
  container* dynArray;
  /**
  * @param Destructor deallocates the dynamic array
  */
  ~DynamicArrayList();
public:
  /**
  * @param constructor that receives no parameters to initialize the dynamic array
  */
  DynamicArrayList();
  /**
  * @param constructor that receives the size of the array as a parameter
  */
  DynamicArrayList(int size);
  /**
  * @param returns the dynamic array
  */
  container* getDynamic();
  /** @param sets a subscript in the dynamic array: dynArray by passing 2 parameters:
  * 1) The subscript as a int.
  * 2) The container to insert.
  */
  void setSubscriptDyn(int sub,container elem);
};

#endif
