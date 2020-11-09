#include "TStack.h"
#include <iostream>
using namespace std;

template <class T>
Stack<T>::Stack(int _MaxSize) {//конструктор по умолчанию
	if (_MaxSize <= 0)
		throw _MaxSize;
	size = 0;
	MaxSize = _MaxSize;
	mas = new T[MaxSize];
}

template <class T>
Stack<T>::~Stack() { //деструктор
	delete[] mas;
}

template <class T>
Stack<T>::Stack(const Stack<T>& m) { //конструктор копирования
	MaxSize = m.MaxSize;
	size = m.size;
	mas = new T[MaxSize];
	for (int i = 0; i < size; i++) {
		mas[i] = m.mas[i];
	}
}

template <class T>
Stack<T>& Stack<T>::operator=(const Stack<T>& m) {
	if (MaxSize != m.MaxSize) {
		delete[] mas;
		MaxSize = m.MaxSize;
		mas = new T[MaxSize];
	}
	size = m.size;
	for (int i = 0; i < size; i++) {
		mas[i] = m.mas[i];
	}
}

template <class T>
bool Stack<T>::empty() {
	return !(size);
}

template <class T>
bool Stack<T>::full() {
	return (size == MaxSize);
}

template <class T>
void Stack<T>::push(const T x) {
	if (full()) {
		throw MaxSize;
	}
	else {
		mas[size++] = x;
	}
}

template <class T>
T Stack<T>::pop() {
	if (empty())
		throw "empty";

	return mas[--size];
}

template <class T>
T Stack<T>::top() {
	if (empty())
		throw "empty";
	return mas[size - 1];
}
