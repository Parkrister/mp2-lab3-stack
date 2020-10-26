#pragma once

template <class T>

class Stack {
	int size, MaxSize;
	T* mas;
public:	
	Stack(int _MaxSize);
	Stack(const Stack& s);
	~Stack();
};