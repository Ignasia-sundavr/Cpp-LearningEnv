#include <iostream>
#include "Logheader.h"


int main() 
{

	Log log;
	log.setLevel(Log::levelWarning);
	log.Warning("Attempt 1");
	std::cin.get();
}