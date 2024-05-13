#pragma once

class Log
{

public:

	void Error(const char* message)
	{
			std::cout << "[ERROR]:" << message << std::endl;
	}

	void Warning(const char* message)
	{
			std::cout << "[WARNING]:" << message << std::endl;
	}

	void Info(const char* message)
	{
		std::cout << "[INFO]:" << message << std::endl;
	}
};