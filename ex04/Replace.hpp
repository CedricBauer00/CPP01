#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace
{
private:
	std::string _infile;
	std::string _outfile;
	std::string _to_replace;
	std::string _replacement;

public:
	Replace(const std::string& infile, const std::string& to_replace, const std::string& replacement);
	~Replace();
	const	std::string read_from_file(std::ifstream& infile);
	const	std::string	replace_func(std::string infile_str);
	void	outfile(std::string replaced_str);

};

#endif