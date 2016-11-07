#include "listAsDLL.h"
#include <iostream>
#include <cassert>
using namespace std;
template <class Type>
ListAsDLL<Type>::ListAsDLL():container()
{
first= nullptr;
last = nullptr;
count = 0;
}
template <class Type>
bool ListAsDLL<Type>::isEmptyList() const
{
return (first == nullptr);
}
template <class Type>
void ListAsDLL<Type>::destroy()
{
container *temp; //pointer to delete the node
while (first != nullptr)
{
temp = first;
first = first->link;
delete temp;
}
last = nullptr;
count = 0;
}
template <class Type>
void ListAsDLL<Type>::initializeList()
{
destroy();
}
template <class Type>
int ListAsDLL<Type>::length() const
{
return count;
}
template <class Type>
void ListAsDLL<Type>::print() const
{
container *current; //pointer to traverse the list
current = first;
//set current to point to the first node
while (current != nullptr)
{
cout << current->myInteger << " ";
current = current->link;
}//end while
}//end print
template <class Type>
void ListAsDLL<Type>::reversePrint() const
{
container *current; //pointer to traverse the list
current = last;
//set current to point to the
//last node
while (current != nullptr)
{
cout << current->myInteger << " ";
current = current->back;
}//end while
}//end reversePrint
template <class Type>
bool ListAsDLL<Type>::
search(const Type& searchItem) const
{
bool found = false;
container *current; //pointer to traverse the list
current = first;
while (current != nullptr && !found)
if (current->myInteger >= searchItem)
found = true;
else
current = current->link;
if (found)
found = (current->myInteger == searchItem); //test for
//equality
return found;
}//end search
template <class Type>
Type ListAsDLL<Type>::front() const
{
assert(first != nullptr);
return first->myInteger;
}
template <class Type>
Type ListAsDLL<Type>::backtrack() const
{
assert(last != nullptr);
return last->myInteger;
}
template <class Type>
void ListAsDLL<Type>::insert(const Type& insertItem)
{
container *current;
//pointer to traverse the list
container *trailCurrent; //pointer just before current
container *newNode;
//pointer to create a node
bool found;
newNode = new container; //create the node
newNode->myInteger = insertItem; //store the new item in the node
newNode->link = nullptr;
newNode->back = nullptr;
if (first == nullptr) //if the list is empty, newNode is
//the only node
{
first = newNode;
last = newNode;
count++;
}
else
{
found = false;
current = first;
while (current != nullptr && !found) //search the list
if (current->myInteger >= insertItem)
found = true;
else
{
trailCurrent = current;
current = current->link;
}
if (current == first) //insert newNode before first
{
first->back = newNode;
newNode->link = first;
first = newNode;
count++;
}
else
{
//insert newNode between trailCurrent and current
if (current != nullptr)
{
trailCurrent->link = newNode;
newNode->back = trailCurrent;
newNode->link = current;
current->back = newNode;
}
else
{
trailCurrent->link = newNode;
newNode->back = trailCurrent;
last = newNode;
}
count++;
}//end else
}//end else
}//end insert
template <class Type>
void ListAsDLL<Type>::deleteNode(const Type& deleteItem)
{
container *current; //pointer to traverse the list
container *trailCurrent; //pointer just before current
bool found;
if (first == nullptr)
cout << "Cannot delete from an empty list." << endl;
else if (first->myInteger == deleteItem) //node to be deleted is
//the first node
{
current = first;
first = first->link;
if (first != nullptr)
first->back = nullptr;
else
last = nullptr;
count--;
delete current;
}
else
{
found = false;
current = first;
while (current != nullptr && !found)
if (current->myInteger >= deleteItem)
found = true;
else
current = current->link;
//search the list
if (current == nullptr)
cout << "The item to be deleted is not in "
<< "the list." << endl;
else if (current->myInteger == deleteItem) //check for
//equality
{
trailCurrent = current->back;
trailCurrent->link = current->link;
if (current->link != nullptr)
current->back = trailCurrent;
if (current == last)
last = trailCurrent;
count--;
delete current;
}
else
cout << "The item to be deleted is not in list."
<< endl;
}//end else
}//end deleteNode
