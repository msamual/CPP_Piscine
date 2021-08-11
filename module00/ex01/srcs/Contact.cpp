#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void	Contact::displayInfo()
{
	std::string	first = this->firstName;
	std::string	last = this->lastName;
	std::string	nick = this->nickName;

	if (first.length() > 10)
		first = first.substr(0,9) + '.';
	if (last.length() > 10)
		last = last.substr(0,9) + '.';
	if (nick.length() > 10)
		nick = nick.substr(0,9) + '.';
	std::cout << std::setw(10) << first << '|';
	std::cout << std::setw(10) << last << '|';
	std::cout << std::setw(10) << nick << '|' << std::endl;
}