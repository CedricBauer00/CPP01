#include "Replace.hpp"

int main(int argc, char **argv)
{
	std::string	replaced_str;

	if (argc == 4)
	{
		if (argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
		{
			std::cout << "\033[31mFile/String is emtpy!\033[0m" << std::endl;
			return (-1);
		}
		Replace rep(argv[1], argv[2], argv[3]);
		std::ifstream in(argv[1]);
		if (!in.is_open())
		{
			std::cout << "\033[33mInfile unable to open!\033[0m" << std::endl;
			return (-1);
		}
		if (!std::getline(in, replaced_str))
		{
			std::cout << "\033[31mFile is empty!\033[0m" << std::endl;
			return (-1);
		}
		in.seekg(0, std::ios::beg);
		replaced_str = rep.replace_func(rep.read_from_file(in));
		rep.outfile(replaced_str);
		in.close();
		std::cout << "\033[32mRelaced to a new File!\033[0m" << std::endl;
		return (0);
	}
	std::cerr << "\033[36mEnter: ./replace <filename> <s1> <s2>\033[0m" << std::endl;
	return (-1);
}