



#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack(){}


template <class T>
MutantStack<T>::~MutantStack(){}


template <class T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& other) {
	this->c = other.c;

	return *this;
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return this->c.end();
}

// We need to tell the compiler which particular template class he will need
// that way we are forcing him to compile them
// Otherwise in the main, we'll be calling an undefined reference to
// MutantStack<int>()
template class MutantStack<int>;
template class MutantStack<std::string>;



















