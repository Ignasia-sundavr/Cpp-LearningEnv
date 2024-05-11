#include <iostream>
#include "Log.h"

class Log()
{
	Log()
	{
	}
	

	void SetLevel(int level) {

	}


};


int main() 
{

	Log log;
	log.levelWarning;
	log.Warn("Attempt 1");
	std::cin.get();
}