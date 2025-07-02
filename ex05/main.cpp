#include "Harl.hpp"

int main()
{
	if (argc == 1)
	{
		std::string input;
		Harl harl;
		std::cout << "Enter a command (DEBUG, INFO, WARNING, ERROR):\n";
		while (true)
		{
			if (!std::getline(std::cin, input))
				return (-1);
			if (input.empty())
			{
				std::string << "\033[31mEmpty input!\033[0m" << std::endl;
				continue ;
			}
			for (size_t i = 0; i < input.length(); ++i)
				if (std::islower(input[i]))
					input[i] = toupper(input[i]);
			if (input == "DEBUG" || input == "INFO" || input == "WARNING" || input == "ERROR")
				harl.complain(input);
			else
				std::cout << "Invalid command.\n";
		}
		return (0);
	}
	return (-1);
}