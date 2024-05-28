#include <iostream>
#include "Logheader.h"


int main() 
{

	Log log;
	log.IsInitialised();
	log.Info("Started");
	std::cin.get();
}
