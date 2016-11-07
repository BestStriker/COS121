#include "Operators.h"
bool operator<(Integer& left, Integer& right)
{
  if (left.getInt() == right.getInt()) {
    return false;
  }
  else if (left.getInt() < right.getInt()) {
    return true;
  }
  else return false;
}

bool operator>(Integer& left, Integer& right)
{
  if (left.getInt() == right.getInt()) {
    return false;
  }
  else if (left.getInt() > right.getInt()) {
    return true;
  }
  else return false;
}

bool operator==(Integer& left, Integer& right)
{
  if (left.getInt() == right.getInt()) {
    return true;
  }
  else return false;
}
