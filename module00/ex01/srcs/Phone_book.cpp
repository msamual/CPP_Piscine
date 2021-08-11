#include "Book.hpp"
#include <iostream>
#include <stdio.h>
#include <sstream>

phoneBook::phoneBook()
{
	this->count = 0;
}

phoneBook::~phoneBook()
{}

bool	phoneBook::addContact()
{
	Contact		contact;
	std::string	buffer;

	if (this->count == 8)
		return (false);
	contact.setFirstName();
	contact.setLastName();
	contact.setNickName();
	contact.setLogin();
	contact.setPostalAddress();
	contact.setEmailAddress();
	contact.setPhoneNumber();
	contact.setBirthDate();
	contact.setFavoriteMeal();
	contact.setUnderwearColor();
	contact.setDarkestSecret();
	this->count++;
	this->array[this->count - 1] = contact;

	return (true);
}

bool	phoneBook::displayContact()
{
	int				index = 0;
	std::string		input;
	
	std::cout << "insert №: ";
	std::getline(std::cin, input);
	std::istringstream	iss(input);
	iss >> index;
	if (std::cin.eof())
		exit(0);
	if (index < 1 || index > this->count)
	{
		input.erase(input.find_last_not_of(" \n\r\t")+1);
		std::cout << "can't find this index '" << input << "'" << std::endl;
		return (false);
	}
	index--;
	std::cout << std::left << std::setw(20) << "first name:" << this->array[index].getFirstName() << std::endl;
	std::cout << std::left << std::setw(20) << "last name:" << this->array[index].getLastName() << std::endl;
	std::cout << std::left << std::setw(20) << "nick name:" << this->array[index].getNickName() << std::endl;
	std::cout << std::left << std::setw(20) << "login:" << this->array[index].getLogin() << std::endl;
	std::cout << std::left << std::setw(20) << "postal address:" << this->array[index].getPostalAddress() << std::endl;
	std::cout << std::left << std::setw(20) << "email address:" << this->array[index].getEmailAddress() << std::endl;
	std::cout << std::left << std::setw(20) << "phone number:" << this->array[index].getPhoneNumber() << std::endl;
	std::cout << std::left << std::setw(20) << "birth date:" << this->array[index].getBirthDate() << std::endl;
	std::cout << std::left << std::setw(20) << "favorite meal:" << this->array[index].getFavoriteMeal() << std::endl;
	std::cout << std::left << std::setw(20) << "underwear color:" << this->array[index].getUnderwearColor() << std::endl;
	std::cout << std::left << std::setw(20) << "darkest secret:" << this->array[index].getDarkestSecret() << std::endl;
	return (true);
}

Contact	phoneBook::getContact(int i)
{
	return (this->array[i]);
}

bool	phoneBook::displaySearch()
{
	if (this->count == 0)
		return (false);
	std::cout << "|         №| firstName|  lastName|  nickName|" << std::endl;
	for (int i = 0; i < this->count; i++)
	{
		std::cout << '|';
		std::cout << std::setw(10) << i + 1;
		std::cout << '|';
		this->getContact(i).displayInfo();
	}
	return (true);
}