#pragma once

template <class T>
class Stack {
	int size, MaxSize;
	T* mas;
public:	
	Stack(int _MaxSize);
	Stack(const Stack& s);
	~Stack();
	Stack& operator=(const Stack<T>& m);
	bool empty();
	bool full();
	void push(const T x);
	T pop();
	T top();
};