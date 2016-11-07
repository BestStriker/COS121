#ifndef CONTAINER_H
#define CONTAINER_H
#include "Integer.h"
class container : public Integer
{
public:
  /**
  * @brief The isNull function checks if the container is an isNullObject.
  * In this case it isn't so we return false in the function.
  */
  bool isNull(void) const;
  /**
  * @brief Constructor used so that an Integer can be created without parameters
  */
  container():Integer()
  {
    myInteger = 0;
    link = 0;
    back = 0;
  }
  /**
  * @brief This will contain the Integer object as a pointer.
  * This functionality will allow us to use the Integer as a Node in the linked list.
  */
  Integer* link;
  /**
  * @brief In order to create a doubly linked list we need to also specify an address for the previous node.
  * This is where we use another pointer back to implement the listasDLL class
  */
  Integer *back;
  /**
  * @brief sets the int data type that is contained inside the container by passing an int as a parameter.
  */
  void setContainer(int anInt);
  /**
  * @param returns the int data type that is contained inside Integer
  */
  int getInt();
};

#endif
