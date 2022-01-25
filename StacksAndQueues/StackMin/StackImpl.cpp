#include "StackImpl.h"

Stack::Stack()
{
	top = -1;
}

void Stack::push(int elem)
{
	if (top >= size)
	{
		std::cout << "STACK IS FULL";
		return;
	}
	int current = min[top];
	top++;

	if (top == 0 || elem < current)
	{
		min[top] = elem; // New minimum
	}
	else
	{
		min[top] = current; //keep current minimum
	}

	data[top] = elem;
	return;
}

void Stack::pop()
{
	if (top == -1)
	{
		std::cout << "EMPTY STACK";
	}
	--top;
	return;
}

void Stack::minimum()
{
	if (top == -1)
	{
		std::cout << "NO MINIMUM";
	}
	else
	{
		std::cout << min[top] << " \n ";
	}
}

void Stack::display()
{
	int i = top;
	std::cout << "STACKS ELEMENTS";
	while (i)
	{
		std::cout << data[--i] << " ";
	}
	i = top;
	std::cout << "\n" << "MINIMUM ELEMENT ";
	std::cout << min[top];
}
