
#ifndef ITERATOR_H
#define ITERATOR_H
#include "container.h"
template <class Type>
class Iterator : public container
{
	public:
		Iterator();
		//Default constructor.
		//Postcondition: current = nullptr;
		Iterator(container *ptr);
		//Constructor with a parameter.
		//Postcondition: current = ptr;
		Type operator*();
		//Function to overload the dereferencing operator *.
		//Postcondition: Returns the info contained in the node.
		Iterator<Type> operator++();
		//Overload the pre-increment operator.
		//Postcondition: The iterator is advanced to the next
		//node.
		bool operator==(const Iterator<Type>& right) const;
		//Overload the equality operator.
		//Postcondition: Returns true if this iterator is equal to
		//the iterator specified by right,
		//otherwise it returns false.
		bool operator!=(const Iterator<Type>& right) const;
		//Overload the not equal to operator.
		//Postcondition: Returns true if this iterator is not equal
		//to the iterator specified by right,
		//otherwise it returns false.
	private:
		container *current; //pointer to point to the current
		//node in the linked list
};

#endif
