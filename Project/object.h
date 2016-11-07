#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
class object
{
protected:
  /**
  * @brief The compareTo function is a pure virtual function which is defined in derived classes.
  */
  virtual int compareTo(object const &) const = 0;
public:
  /**
  * @brief The Destructor is a pure virtual Destructor, because if memory is allocated on the heap,
  * it must also be deallocated without memory errors
  */
  virtual ~object(void);
  /**
  * @brief The isNull function checks whether the object is an isNullObject
  */
  virtual bool isNull(void) const;
  /**
  * @brief The compare function is used to compare two objects with eachother and return an int data
  * after the comparison
  */
  virtual int compare(object const &) const;
  /**
  * @brief The print function is a pure virtual function which is defined in derived classes.
  */
  virtual void print(std::ostream & = std::cout) const = 0;
};


#endif
