#ifndef INTEGER_H
#define INTEGER_H
#include "object.h"

class Integer : public object
{
protected:
  /**
  * @brief Stores an int data type.
  */
  int myInteger;
  /**
  * @brief The compareTo function compares two objects with eachother.
  * dynamic_cast was used to convert the object to an int to compare eachother
  */
  int compareTo(object const &) const;
public:
  /**
  * @brief The Constructor initializes Integer with an int data type,
  * and therefore initializes the object's myInteger member variable with an int as parameter.
  */
  Integer(int);
  /**
  * @brief The print function simply prints the myInteger member variable on the screen.
  */
  void print(std::ostream &os) const;
  /**
  * @brief The isNull function checks if the Integer object is an isNullObject.
  * In this case we know that Integer isn't a isNullObject so the function
  * will return false
  */
  bool isNull(void) const;
  /**
  * @brief the getInt function is a simple public function that the user can use to return the myInteger member variable
  */
  virtual int getInt();
  /**
  * @brief Constructor used so that an Integer can be created without parameters
  */
  Integer(){}

};


#endif
