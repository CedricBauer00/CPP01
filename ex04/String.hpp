#ifndef STRING_HPP
#define STRING_HPP

class String
{
private:
	char* _str;

public:
	String(char *str);
	~String();

	begin();
	end();

};

#endif

String::String(char *str) {
	_str = str;
}
