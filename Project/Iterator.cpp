#include "Iterator.h"

	template <class Type>
Iterator<Type>::Iterator()
{
	current = nullptr;
}
	template <class Type>
Iterator<Type>::Iterator(container *ptr)
{
	current = ptr;
}
	template <class Type>
Type Iterator<Type>::operator*()
{
	return current->myInteger;
}
	template <class Type>
Iterator<Type> Iterator<Type>::operator++()
{
	current = current->link;
	return *this;
}
template <class Type>
bool Iterator<Type>::operator==(const Iterator<Type>& right) const
{
	return (current == right.current);
}
template <class Type>
bool Iterator<Type>::operator!=(const Iterator<Type>& right) const
{
	return (current != right.current);
}
