#ifndef __STACK__
#define __STACK__

#include <iostream>
#include <vector>


class Stack
{
public:
	Stack();
	~Stack() = default;
public:
	void push(int);
	void pop();
	void minimum();
	void display();
private:
	static const int size = 100;
	int data[size];
	int min[size];
	int top = -1;
};



const int Stack::size;
#endif // !__STACK__
