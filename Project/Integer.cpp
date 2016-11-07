#include "Integer.h"
#include <iostream>
using namespace std;


bool Integer::isNull(void) const
{
  return false;
}

void Integer::print(std::ostream &os) const
{
  cout << myInteger << endl;
}

int Integer::compareTo(object const &right) const
{
  const Integer* obj2ptr = dynamic_cast<const Integer*>(&right);
  const Integer* thisObj = dynamic_cast<const Integer*>(this);
  if (thisObj == obj2ptr) {
    return 0;
  }
  else {
    return thisObj - obj2ptr;
  }
}

Integer::Integer(int other)
{
  myInteger = other;
}

int Integer::getInt()
{
  return this->myInteger;
}
