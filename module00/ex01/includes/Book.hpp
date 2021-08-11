#ifndef BOOK_H
# define BOOK_H

# include "Contact.hpp"

class phoneBook
{
private:
	int		count;
	Contact	array[8];

public:
	phoneBook();
	~phoneBook();

	Contact	getContact(int i);

	bool	addContact();
	bool	displaySearch();
	bool	displayContact();
};

#endif
