#include <iostream>
using namespace std;
#include "object.h"
#include "auditorium.h"
#include "container.h"
#include "Integer.h"
#include "nullObject.h"
#include "Operators.h"
#include "list.h"
#include "ListAsArray.h"
int main()
{
  Integer myInt(50);
  Integer anotherInt(40);
  cout << "Compare: " <<myInt.compare(anotherInt) << endl;
  cout << "Compare: " << anotherInt.compare(myInt) << endl;
  cout << "Operator< : " << (myInt < anotherInt) << endl;
  cout << "Operator> : " << (myInt > anotherInt) << endl;
  cout << "Operator== : " << (myInt == anotherInt) << endl;
  ListAsArray myarr;
  container Mycontainer;
  Mycontainer.setContainer(50);
  myarr.setSize(5);
  cout << "Testing size Functions:\n";
  cout << "getSize() = ";
  cout << myarr.getSize() << endl;
  myarr.setSubscript(2,Mycontainer);

}
