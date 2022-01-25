#ifndef __MYQUEUE__
#define __MYQUEUE__

#include <iostream>
#include <stack>

template<typename T>
class MyQueue
{
public:
	MyQueue() = default;
	~MyQueue() = default;
public:
	bool enqueue(T);
	bool dequeue();
	T peek()const;
	bool empty()const;
private:
	std::stack<T> original,temp;
	int start;
	int end;
	int count;
	static const int size = 1000;
};

const int MyQueue<int>::size;

#endif // __MYQUEUE__
