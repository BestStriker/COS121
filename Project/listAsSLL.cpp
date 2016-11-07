#include "listAsSLL.h"
#include <iostream>
#include <cassert>
using namespace std;
	template <class Type>
ListAsSLL<Type>::ListAsSLL() //default constructor
{
	first = nullptr;
	last = nullptr;
	count = 0;
}
//pointer to deallocate the memory
//occupied by the node
	template <class Type>
void ListAsSLL<Type>::destroyList()
{
	container *temp;
	while (first != nullptr) //while there are nodes in the list
	{
		temp = first;
		//set temp to the current node
		first = first->link; //advance first to the next node
		delete temp;
		//deallocate the memory occupied by temp
	}
	last = nullptr; //initialize last to nullptr; first has already
	//been set to nullptr by the while loop
	count = 0;
}
	template <class Type>
void ListAsSLL<Type>::initializeList()
{
	destroyList(); //if the list has any nodes, delete them
}
template <class Type>
void ListAsSLL<Type>::print() const
{
	container *current; //pointer to traverse the list
	//set current so that it points to
	//the first node
	while (current != nullptr) //while more data to print
	{
		cout << current->myInteger << " ";
		current = current->link;
	}
}//end print
template <class Type>
int ListAsSLL<Type>::length() const
{
	return count;
}
template <class Type>
Type ListAsSLL<Type>::front() const
{
	assert(first != nullptr);
	return first->myInteger; //return the info of the first node
}//end front
template <class Type>
Type ListAsSLL<Type>::back() const
{
	assert(last != nullptr);
	return last->myInteger; //return the info of the last node
}//end back
	template <class Type>
Iterator<Type> ListAsSLL<Type>::begin()
{
	Iterator<Type> temp(first);
	return temp;
}
	template <class Type>
Iterator<Type> ListAsSLL<Type>::end()
{
	Iterator<Type> temp(nullptr);
	return temp;
}
template <class Type>
	void ListAsSLL<Type>::copyList
(const ListAsSLL<Type>& otherList)
{
	container *newNode; //pointer to create a node
	container *current; //pointer to traverse the list
	if (first != nullptr) //if the list is nonempty, make it empty
		destroyList();
	if (otherList.first == nullptr) //otherList is empty
	{
		first = nullptr;
		last = nullptr;
		count = 0;
	}
	else
	{
		current = otherList.first; //current points to the
		//list to be copied
		count = otherList.count;
		//copy the first node
		first = new container; //create the node
		first->myInteger = current->myInteger; //copy the info
		first->link = nullptr;
		//set the link field of
		//the node to nullptr
		last = first;
		//make last point to the
		//first node
		current = current->link;
		//make current point to
		//the next node
		//copy the remaining list
		while (current != nullptr)
		{
			newNode = new Integer; //create a node
			newNode->myInteger = current->myInteger; //copy the info
			newNode->link = nullptr;
			//set the link of
			//newNode to nullptr
			last->link = newNode; //attach newNode after last
			last = newNode;
			//make last point to
			//the actual last node
			current = current->link;
			//make current point
			//to the next node
		}//end while
	}//end else
}//end copyList
	template <class Type>
ListAsSLL<Type>::~ListAsSLL() //destructor
{
	destroyList();
}
template <class Type>
	ListAsSLL<Type>::ListAsSLL
(const ListAsSLL<Type>& otherList)
{
	first = nullptr;
	copyList(otherList);
}//end copy constructor
//overload the assignment operator
template <class Type>
	const ListAsSLL<Type>& ListAsSLL<Type>::operator=
(const ListAsSLL<Type>& otherList)
{
	if (this != &otherList) //avoid self-copy
	{
		copyList(otherList);
	}//end else
	return *this;
}
