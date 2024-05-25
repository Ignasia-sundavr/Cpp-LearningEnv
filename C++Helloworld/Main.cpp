
#include <iostream>
#include "Log.h"
#include "Calc.cpp"


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

	return 0;
}