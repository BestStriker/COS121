#include "Integer.h"
/**
* @brief This simply overloads the < operator to compare two Integer objects and see which one is bigger
* The function returns true if the object left of the < operator is smaller than the object on the
* right of the < operator
*/
bool operator<(Integer&, Integer&);
/**
* @brief This simply overloads the > operator to compare two Integer objects and see which one is bigger
* The function returns true if the object left of the > operator is smaller than the object on the
* right of the > operator
*/
bool operator>(Integer&, Integer&);
/**
* @brief This simply overloads the == operator to compare two Integer objects.
* Function will return true if Integer on the right is equal to Integer on the left.
* Function will return false if the two Integers isn't equal
*/
bool operator==(Integer&, Integer&);
