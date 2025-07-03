#include "Harl.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		std::string input;
		Harl harl;
		std::cout << " : Enter a command (DEBUG, INFO, WARNING, ERROR) :" << std::endl;
		while (true)
		{
			if (!std::getline(std::cin, input))
				return (-1);
			if (input.empty())
			{
				std::cout << "\033[31mEmpty input.\033[0m" << std::endl;
				continue ;
			}
			for (size_t i = 0; i < input.length(); ++i)
				if (std::islower(input[i]))
					input[i] = toupper(input[i]);
			if (input == "DEBUG" || input == "INFO" || input == "WARNING" || input == "ERROR")
				harl.complain(input);
			else if (input == "EXIT")
				return (0);
			else
				std::cout << "\033[31mInvalid command. \033[0m" << std::endl;
		}
		return (0);
	}
	return (-1);
}