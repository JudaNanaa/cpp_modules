#include <iostream>
#include <stdexcept>

template <typename T>
Array<T>::Array(void)
	: _elements(NULL), _arraySize(0) {

}

template <typename T>
Array<T>::Array(unsigned int const n) {
	this->_elements = new T[n]();
	this->_arraySize = n;
}

template <typename T>
Array<T>::Array(const Array &other) {
	this->_elements = new T[other._arraySize];
    for (unsigned int i = 0; i < other._arraySize; i++) {
        this->_elements[i] = other._elements[i];
	}
	this->_arraySize = other._arraySize;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this->_elements)
		delete[] this->_elements;
	this->_arraySize = other._arraySize;
	this->_elements = new T[other._arraySize];
    for (unsigned int i = 0; i < other._arraySize; i++) {
        this->_elements[i] = other._elements[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	if (this->_elements)
		delete[] this->_elements;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index < 0 || index >= this->_arraySize)
		throw std::out_of_range("Index out of bounds");
	return this->_elements[index];
}

template <typename T>
unsigned int const &Array<T>::size() const {
	return this->_arraySize;
}

