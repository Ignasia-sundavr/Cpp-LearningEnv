#pragma once

struct Log
{

private:

	bool m_InitLog = false;

public:


	Log()
	{
		m_InitLog = true;
	}
	
	void IsInitialised() 
	{
		std::cout << "Initilised = " << m_InitLog << std::endl;
	}

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