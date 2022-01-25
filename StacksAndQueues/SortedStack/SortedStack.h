#ifndef __SORTEDSTACK__
#define __SORTEDSTACK__

#include <iostream>
#include <stack>

template<typename T>
class SortedStack
{
public:
	void pushElem(const T&);
	void popElem();
	bool emptyElem()const;
	T peekElem()const;

private:
	std::stack<T>data;
};

#endif // !__SORTEDSTACK__
