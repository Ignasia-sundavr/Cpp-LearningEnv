#include <iostream>
#include "Log.h"

void InitLog() 
{
	Log("InitializingLog");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}