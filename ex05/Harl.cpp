#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout	<< "\033[33mHarl: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\033[0m"
				<< std::endl;
}

void Harl::info( void )
{
	std::cout	<< "\033[38;5;208mHarl: I cannot believe adding extra bacon costs more money. You didn't put \
				enough bacon in my burger! If you did, I wouldn't be asking for more!\033[0m"
				<< std::endl;
}

void Harl::warning( void )
{
	std::cout	<< "\033[38;5;88mHarl : I think I deserve to have some extra bacon for free. I've been coming for \
				years, whereas you started working here just last month.\033[0m"
				<< std::endl;
}

void Harl::error( void )
{
	std::cout	<< "\033[91mHarl : This is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; ++i)
	{
		if (str[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	}
}