#ifndef NULLOBJECT_H
#define NULLOBJECT_H
#include "object.h"
#include <iostream>
using namespace std;

class nullObject : public object
{
protected:
  /**
  * @brief The compareTo function compares two objects with eachother.
  * dynamic_cast was used to convert the object to an int to compare eachother
  */
  int compareTo(object const &) const;
public:
  /**
  * @brief The print function simply prints the nullObject on the screen
  */
  void print(ostream& = cout) const;
  /**
  * @brief The isNull function checks whether the isNullObject is an isNullObject.
  * In this case we know it is, so the function returns true
  */
  bool isNull(void) const;
};

#endif
