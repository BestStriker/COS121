#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include "object.h"
class auditorium : public object
{
public:
  /**
  * @brief The isNull function checks if the auditorium is an isNullObject.
  * In this case it isn't so we return false in the function.
  */
  bool isNull(void) const;
};

#endif
