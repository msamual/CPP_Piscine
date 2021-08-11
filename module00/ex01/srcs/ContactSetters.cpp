#include "Contact.hpp"

void	Contact::setFirstName()
{
	std::cout << "firstName: ";
	std::getline(std::cin, this->firstName);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setLastName()
{
	std::cout << "lastName: ";
	std::getline(std::cin, this->lastName);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setNickName()
{
	std::cout << "nickName: ";
	std::getline(std::cin, this->nickName);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setLogin()
{
	std::cout << "login: ";
	std::getline(std::cin, this->login);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setPostalAddress()
{
	std::cout << "postalAddress: ";
	std::getline(std::cin, this->postalAddress);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setEmailAddress()
{
	std::cout << "emailAddress: ";
	std::getline(std::cin, this->emailAddress);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setPhoneNumber()
{
	std::cout << "phoneNumber: ";
	std::getline(std::cin, this->phoneNumber);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setBirthDate()
{
	std::cout << "birthDate: ";
	std::getline(std::cin, this->birthDate);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setFavoriteMeal()
{
	std::cout << "favoriteMeal: ";
	std::getline(std::cin, this->favoriteMeal);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setUnderwearColor()
{
	std::cout << "underwearColor: ";
	std::getline(std::cin, this->underwearColor);
	if (std::cin.eof())
		exit(0);
}

void	Contact::setDarkestSecret()
{
	std::cout << "darkestSecret: ";
	std::getline(std::cin, this->darkestSecret);
	if (std::cin.eof())
		exit(0);
}