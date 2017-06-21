// Initialization flag
#define _EXPORT_

#include "Logger\Logger.h"



Logger::Logger() 
{

}


Logger::~Logger()
{

}

void Logger::Log(std::tstring LogErrorCode, std::tstring LogObject, std::tstring LogMessage, std::tstring LogFunctionName, std::tstring LogFileName, int LogLineNum, LogType logtype)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	std::tcout << "ERROR: You Can't use Main Logger Class Objects " << std::endl;
}

void Logger::Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFunctionName, std::tstring LogFileName, int LogLineNum, LogType logtype)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	std::tcout << "ERROR: You Can't use Main Logger Class Objects " << std::endl;
}

bool Logger::Initialize()
{
	IsLoggerInitialized = true;
	return true;
}

bool Logger::ShutDown()
{
	IsLoggerShuttedDown = true;
	return bool();
}



void Logger::Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFileName, int LogLineNum, LogType logtype)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	std::tcout << "ERROR: You Can't use Main Logger Class Objects " << std::endl;
}
void Logger::Log(std::tstring LogObject, std::tstring LogMessage, std::tstring LogFileName, LogType logtype)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	std::tcout << "ERROR: You Can't use Main Logger Class Objects " << std::endl;
}




