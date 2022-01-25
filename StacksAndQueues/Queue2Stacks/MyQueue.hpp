#include "MyQueue.h"


template<typename T>
bool MyQueue<T>::empty()const
{
	return original.empty();
}

template<typename T>
T MyQueue<T>::peek()const
{
	return original.top();
}

template<typename T>
bool MyQueue<T>::enqueue(T elem)
{
	bool check = false;
	if (count < size)
	{
		++count;
		end = (end + 1) % size;
		check = original.push(elem);
	}
	return check;
}

template<typename T>
bool MyQueue<T>::dequeue()
{
	bool check = false;
	if (!original.empty())
	{
		start = (start + 1) % size;
		--count;
		for (int i = 0; i < count - 1; ++i)
		{
			temp.push(original.top());
			original.pop();
		}
		original.pop();
		--count;
		for (int i = 0; i < count; ++i)
		{
			original.push(temp.top());
			temp.pop();
		}
		check = true;
	}
	return check;
}