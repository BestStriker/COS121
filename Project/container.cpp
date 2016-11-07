#include "container.h"
#include <vector>

bool container::isNull(void) const
{
  return false;
}

void container::setContainer(int anInt)
{
  this->myInteger = anInt;
}

int container::getInt()
{
  return myInteger;
}
