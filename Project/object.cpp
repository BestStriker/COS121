#include "object.h"
#include "Integer.h"
bool object::isNull(void) const
{
  return false;
}

int object::compare(object const & obj2) const
{
  const Integer* obj2ptr = dynamic_cast<const Integer*>(&obj2);
  const Integer* thisObj = dynamic_cast<const Integer*>(this);

  if (thisObj == obj2ptr) {
    return 0;
  }
  else {
    return obj2ptr - thisObj;
  }
}

object::~object(void){}
