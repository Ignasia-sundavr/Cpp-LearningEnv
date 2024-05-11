
#include <iostream>
#include "Log.h"


void Log(const char* message) 
{
	std::cout << message << std::endl;
}


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