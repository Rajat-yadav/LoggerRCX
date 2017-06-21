#include "Logger\Main\LoggerRCXmain.h"

int main(int argc, char* argv[]) 
{
	Logger* log = new Logger;
	Logger Rp;
	std::tcout<<SetLoggerInitialized(log);
	std::tcout<<SetLoggerInitialized(Rp);
}