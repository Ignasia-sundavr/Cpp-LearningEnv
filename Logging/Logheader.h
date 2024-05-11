#pragma once

class Log
{
public:
	enum Level {
		levelError, levelWarning, levelInfo
	};

private:
	Level m_LogLevel = levelInfo;

public:

	void setLevel(Level level) {

		int m_LogLevel = level;
	}


	void Error(const char* message)
	{
		if (m_LogLevel >= levelError) {
			std::cout << "[ERROR]:" << message << std::endl;
		}

	}

	void Warning(const char* message)
	{
		if (m_LogLevel >= levelWarning) {
			std::cout << "[WARNING]:" << message << std::endl;
		}

	}

	void Info(const char* message)
	{
		if (m_LogLevel >= levelInfo) {
			std::cout << "[INFO]:" << message << std::endl;
		}

	}
};