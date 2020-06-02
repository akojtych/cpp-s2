#include <iostream>
#include "stos1.h"

int main()
{
	Stos stos;
	for (int i = 1; i <= 25; i++)
	{
		if (i % 3 == i % 5)
			stos.push(i);
	}
	while (!stos.empty())
	{
		std::cout << stos.top() << " ";
		stos.pop();
	}
	return 0;
}
