#include "SortedStack.h"

template <typename T>
bool SortedStack<T>::emptyElem()const
{
	return data.empty();
}

template <typename T>
void SortedStack<T>::popElem()
{
	data.pop();
}

template<typename T>
T SortedStack<T>::peekElem()const
{
	return data.top();
}

template<typename T>
void SortedStack<T>::pushElem(const T& elem)
{
	if (data.empty())
	{
		data.push(elem);
	}
	if (elem < data.top())
	{
		data.push(elem);
	}
	else
	{
		std::stack<T>temp;
		while ((!data.empty()) && (elem >= data.top()))
		{
			temp.push(data.top());
			data.pop();
		}
		temp.push(elem);
		while (!temp.empty())
		{
			data.push(temp.top());
			temp.pop();
		}
	}
}
