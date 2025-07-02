#include "Harl.hpp"

void debug( void )
{
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< std::endl;
}

void info( void )
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. You didn't put
				enough bacon in my burger! If you did, I wouldn't be asking for more!"
				<< std::endl;
}

void warning( void )
{
	std::cout	<< "I think I deserve to have some extra bacon for free. I’ve been coming for
				years, whereas you started working here just last month."
				<< std::endl;
}

void error( void )
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void	Harl::complain( std::string level )
{
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void* func[]() = {debug(), info(), warning(), error()};
	for (int i = 0; i < 4; ++i)
	{
		if (str[i] == level)
			
	}
}