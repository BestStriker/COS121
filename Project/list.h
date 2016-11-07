#ifndef LIST_H
#define LIST_H
#include "container.h"
template <class Type>
class List : public container
{
  /** @param Function to determine whether searchItem is in the list.
  *Postcondition: Returns true if searchItem is in the
  *list, otherwise the value false is returned.
  */
  virtual bool search(const Type& searchItem) const = 0;

  /** @param Function to insert newItem at the beginning of the list.
  *Postcondition: first points to the new list, newItem is
  *inserted at the beginning of the list,
  *last points to the last node in the list,
  *and count is incremented by 1.
  */
  virtual void insertFirst(const Type& newItem) = 0;

  /** @param Function to insert newItem at the end of the list.
  *Postcondition: first points to the new list, newItem
  *is inserted at the end of the list,
  *last points to the last node in the list,
  *and count is incremented by 1.
  */
  virtual void insertLast(const Type& newItem) = 0;

  /** @param Function to delete deleteItem from the list.
  *Postcondition: If found, the node containing
  *deleteItem is deleted from the list.
  *first points to the first node, last
  *points to the last node of the updated
  *list, and count is decremented by 1.
  */
  virtual void deleteNode(const Type& deleteItem) = 0;

};

#endif
