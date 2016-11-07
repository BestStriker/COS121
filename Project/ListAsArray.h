#ifndef LISTASARRAY_H
#define LISTASARRAY_H
#include "container.h"

class ListAsArray : public container
{
  /** @param  size is the size of the array of containers
  */
  int size = 0;
  /** @param array of Containers which will be initialized with size
  */
  container arrContainer[];
  /** @param sets the arrContainer when you set the size of the array
  */
  void setContainer(int);
public:
  /** @param sets the size of the array and also executes the function setContainer(int)
  */
  void setSize(int);
  /** @param returns the size of the array
  */
  int getSize();
  /** @param returns the array
  */
  container getArray();
  /** @param sets a subscript in the arrContainer by passing 2 parameters:
  * 1) The subscript as a int.
  * 2) The container to insert.
  */
  void setSubscript(int sub,container elem);
};

#endif
