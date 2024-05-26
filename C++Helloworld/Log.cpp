
#include "Header.h"
#include <iostream>


void Log(const char* message)
{
	std::cout << message << std::endl;
}

void LogNum(int number)
{
	std::cout << number << std::endl;
}


void InitLog() 
{
	Log("InitializingLog");
}