#include "ListAsArray.h"

void ListAsArray::setSize(int arrSize)
{
  size = arrSize;
}

int ListAsArray::getSize()
{
  return this->size;
}

void ListAsArray::setContainer(int arraySize)
{
  arrContainer[size];
}

container ListAsArray::getArray()
{
  return arrContainer[size];
}

void ListAsArray::setSubscript(int sub,container elem)
{
  arrContainer[sub] = elem;
}
