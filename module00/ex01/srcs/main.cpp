#include "Book.hpp"

int main()
{
	phoneBook	book;
	std::string	buffer;

	while (true)
	{
		std::cout << "insert command: ";
		std::getline(std::cin, buffer);
		if (std::cin.eof() || buffer == "EXIT")
			break ;
		else if (buffer.empty())
			continue ;
		else if (buffer == "ADD")
		{
			if (book.addContact() == false)
				std::cout << "the phonebook is full" << std::endl;
		}
		else if (buffer == "SEARCH")
		{
			if (book.displaySearch() == false)
				std::cout << "the phonebook is empty" << std::endl;
			else
				while (!book.displayContact());
		}
		else
			std::cout << "unknown command! use ADD | SEARCH | EXIT" << std::endl;
	}
	return (0);
}