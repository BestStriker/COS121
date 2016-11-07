#include "ListAsVector.h"

void ListAsVector::initVector(int size)
{
  myList.resize(size);
}

void ListAsVector::insert(container i)
{
  myList.push_back(i);
}
