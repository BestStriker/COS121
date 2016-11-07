#ifndef LISTASSLL_H
#define LISTASSLL_H
#include "container.h"
#include "Iterator.h"
template <class Type>
class ListAsSLL : public container
{
	public:
		/** @param Overload the assignment operator.
		*/
		const ListAsSLL<Type>& operator=
			(const ListAsSLL<Type>&);
			/** @paramInitialize the list to an empty state.
			*Postcondition: first = nullptr, last = nullptr, count = 0;
			*/
		void initializeList();
		/** @param Function to determine whether the list is empty.
		*Postcondition: Returns true if the list is empty,
		*otherwise it returns false.
		*/
		bool isEmptyList() const;
		/** @param Function to output the data contained in each node.
		*Postcondition: none
		*/
		void print() const;
		/** @param Function to return the number of nodes in the list.
		*Postcondition: The value of count is returned.
		*/
		int length() const;
		/** @param Function to delete all the nodes from the list.
		*Postcondition: first = nullptr, last = nullptr, count = 0;
		*/
		void destroyList();
		/** @param Function to return the first element of the list.
		*Precondition: The list must exist and must not be
		*empty.
		*Postcondition: If the list is empty, the program
		*terminates; otherwise, the first
		*element of the list is returned.
		*/
		Type front() const;
		/** @param Function to return the last element of the list.
		*Precondition: The list must exist and must not be
		*empty.
		*Postcondition: If the list is empty, the program
		*terminates; otherwise, the last
		*element of the list is returned.
		*/
		Type back() const;

		/** @param Function to return an iterator at the begining of the
		*linked list.
		*Postcondition: Returns an iterator such that current is
		*set to first.
		*/
		Iterator<Type> begin();

		/** @param Function to return an iterator one element past the
		*last element of the linked list.
		*Postcondition: Returns an iterator such that current is
		*set to nullptr.
		*/
		Iterator<Type> end();
		/** @param default constructor
		*Initializes the list to an empty state.
		*Postcondition: first = nullptr, last = nullptr, count = 0;
		*/
		ListAsSLL();
		/** @param copy constructor for more features
		*/
		ListAsSLL(const ListAsSLL<Type>& otherList);
		/** @param destructor
		*Deletes all the nodes from the list.
		*Postcondition: The list object is destroyed.
		*/
		~ListAsSLL();

	protected:
		/** @param variable to store the number of
		*elements in the list
		*/
		int count;
		/** @param pointer to the first node of the list
		*/
		container *first;
		/** @param pointer to the last node of the list
		*/
		container *last;
	private:
		/** @param Function to make a copy of otherList.
		*Postcondition: A copy of otherList is created and
		*assigned to this list.
		*/
		void copyList(const ListAsSLL<Type>& otherList);

};
#endif
