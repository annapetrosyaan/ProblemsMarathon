#ifndef __STACKIMPL__
#define  __STACKIMPL__

#include <iostream>

template <class T>
class ArrayStack
{
public:
	ArrayStack();
	~ArrayStack();
public:
	bool push(T,int);
	bool pop(int);
	const T& top(int)const;
private:
	T* a_ptr{ nullptr };
	T a_first;
	T a_second;
	T a_third;
	const int a_size=100;
};


template<typename T>
ArrayStack<T>::ArrayStack(): a_first(0),
a_second(a_size / 3), a_third(2 * a_size / 3)
{
	a_ptr = new T[a_size];
}

template<typename T>
bool ArrayStack<T>::push(T elem, int index)
{
	
	if (index <= 0 || index >= 4)
	{
		std::cout << "index out of range";
		return 0;
	}
	bool check = false;
	if (index == 1)
	{
		if(a_first>a_size / 3-1)
		{
			std::cout << " no enough place";
			check=false;
		}
		a_ptr[a_first] = elem;
		a_first++;
		check = true;
	}
	if (index == 2)
	{
		if (a_second > 2 * a_size / 3 - 1)
		{
			std::cout << "no enough place in stack 2";
			check= false;
		}
		a_ptr[a_second] = elem;
		a_second++;
		check = true;
	}
	else
	{
		if (a_third > a_size - 1)
		{
			std::cout << "no enough place in stack 3";
			check = false;
	   }
		a_ptr[a_third] = elem;
		a_third++;
		check = true;
	}
	return check;
}

template<typename T>
bool ArrayStack<T>::pop(int index)
{
	if (index <= 0 || index >= 4)
	{
		std::cout << "out of range";
		return 0;
	}
	bool check = false;
	if (index == 1)
	{
	  if(a_first==0)
	  {
		  std::cout << "nothing in stack 1";
	  }
	  a_ptr[a_first - 1];
	  --a_first;
	  check = true;
	}
	if (index == 2)
	{
		if (a_second == a_size / 3)
		{
			std::cout << "nothing in stack 2";
		}
		a_ptr[a_second - 1];
		--a_second;
		check = true;
	}
	else
	{
		if (a_third < 2 * a_size / 3)
		{
			std::cout << "nothing on stack 3 ";
		}
		a_ptr[a_third--];
		--a_third;
		check = true;
	}
	return check;
}

template<typename T>
const T& ArrayStack<T>::top(int index)const
{
	if (index <= 0 || index >= 4)
	{
		std::cout << " index out of range";
	}
    if(index==1)
    {
		if (a_first == 0)
		{
			std::cout << "nothing in stack 1 to return";
		}
		return a_ptr[a_first - 1];
	}
	if (index == 2)
	{
		if (a_second < a_size / 3)
		{
			std::cout << "nothing in stack 2 to return";
		}
		return a_ptr[a_second - 1];
	}
	else
	{
		if (a_third < 2 * a_size / 3)
		{
			std::cout << "nothing in stack 2 to return";
		}
		return a_ptr[a_third - 1];
	}
	return -1;
}

template<typename T>
ArrayStack<T>::~ArrayStack()
{
	delete[]a_ptr;
	a_ptr = nullptr;
}


#endif //! __ARRAYSTACK__