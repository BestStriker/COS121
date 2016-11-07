#include "nullObject.h"
#include <iostream>
using namespace std;
bool nullObject::isNull(void) const
{
  return true;
}

int nullObject::compareTo(object const &right) const
{
  return 0;
}

void nullObject::print(ostream& os) const
{
  os << "NullObject" << endl;
}
