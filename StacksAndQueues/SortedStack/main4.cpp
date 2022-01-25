#include <iostream>

#include "SortedStack.h"

int main()
{
	SortedStack<int>unsorted;
	unsorted.pushElem(76);
	unsorted.pushElem(1);
	unsorted.pushElem(66);
	unsorted.pushElem(3);
	unsorted.pushElem(34);
	unsorted.pushElem(16);
	unsorted.pushElem(7);

	while (!unsorted.emptyElem())
	{
		std::cout << unsorted.peekElem() << " ";
		unsorted.popElem();
	}
	std::cout << "\n";

}