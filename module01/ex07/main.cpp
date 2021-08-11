#include <iostream>
#include <fstream>
#include <string>

void	replace(std::ifstream& input, std:: ofstream& output, std::string str1, std::string str2)
{
	size_t				i = 0;
	std::string		in;

	std::getline(input, in, '\0');
	while (true)
	{
		i = in.find(str1, i);
		if (i == std::string::npos)
			break;
		in.replace(i, str1.length(), str2);
		i += str2.length();
	}
	output << in;
}

int		main(int ac, char **av)
{
	std::ofstream	output;
	std::ifstream	input;
	std::string		file;
	std::string		str1;
	std::string		str2;

	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments\n";
		return (0);
	}

	file = av[1];
	str1 = av[2];
	str2 = av[3];
	if (str1.empty() || str2.empty())
	{
		std::cout << "Error: empty string\n";
		return (0);
	}
	input.open(file);
	if (input.fail())
	{
		std::cout << "Error: can't open file: '" << file << "'\n";
		return (0);
	}
	output.open(file + ".replace");
	replace(input, output, str1, str2);
	return (0);	
}