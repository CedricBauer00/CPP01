#include "Replace.hpp"

Replace::Replace(const std::string& infile,
	const std::string& to_replace,
	const std::string& replacement) : _infile(infile), _to_replace(to_replace), _replacement(replacement)
	{
		_outfile = infile + ".replace";
	}

Replace::~Replace() {}

const std::string	Replace::replace_func(std::string infile_str)
{
	size_t		start = 0;
	std::string	ret;
	size_t		pos = 0;

	while (true)
	{
		pos = infile_str.find(_to_replace, start);
		if (pos == std::string::npos)
		{
			ret += infile_str.substr(start);
			return (ret);
		}
		ret += infile_str.substr(start, pos - start);
		ret += _replacement;
		start = pos + _to_replace.length();
	}
}

const std::string Replace::read_from_file(std::ifstream& infile)
{
	std::string		copy;
	std::string	buffer;

	while (std::getline(infile, buffer))
	{
		copy += buffer;
		copy += "\n";
	}
	return (copy);
}

void	Replace::outfile(std::string replaced_str)
{
	std::ofstream out(_outfile);
	if (!out.is_open())
	{
		std::cout << "\033[33mOutfile unable to open!\033[33m" << std::endl;
		return ;
	}
	out << replaced_str;
	out.close();
}