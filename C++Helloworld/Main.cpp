
#include "Header.h"
#include <iostream>


int main()
{
	int x = 6;
	InitLog();
	if (x == 6)
	{
		Log("HelloWorld");
		Calculate(5, 31);
	}
	
	std::cin.get();
}