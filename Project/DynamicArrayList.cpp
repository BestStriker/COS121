#include "DynamicArrayList.h"

DynamicArrayList::DynamicArrayList(int arrSize) : ListAsArray()
{
  this->setSize(arrSize);
  dynArray = new container[this->getSize()];
}

DynamicArrayList::DynamicArrayList()
{
  this->setSize(0);
  dynArray = new container[this->getSize()];
}

container* DynamicArrayList::getDynamic()
{
  return dynArray;
}

void DynamicArrayList::setSubscriptDyn(int sub,container elem)
{
  dynArray[sub] = elem;
}

DynamicArrayList::~DynamicArrayList()
{
  delete [] dynArray;
}
