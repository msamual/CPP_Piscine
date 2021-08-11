#include <iostream>
#include <iomanip>

void	change_ptr(std::string*	ptr)
{
	*ptr = "pointer";
}

void	change_ref(std::string& ref)
{
	ref = "reference";
}

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	ptr = &str;
	std::string&	ref = str;

	std::cout << std::setw(15) << "ORIG: " << str << std::endl;
	std::cout << std::setw(15) << "POINTER: " << ptr << std::endl;
	std::cout << std::setw(15) << "REFERENCE: " << ref << std:: endl;

	std::cout << std::endl;

	change_ref(ref);
	std::cout << std::setw(15) << "ORIG: " << str << std::endl;
	std::cout << std::setw(15) << "POINTER: " << ptr << std::endl;
	std::cout << std::setw(15) << "REFERENCE: " << ref << std:: endl;

	std::cout << std::endl;

	change_ptr(ptr);
	std::cout << std::setw(15) << "ORIG: " << str << std::endl;
	std::cout << std::setw(15) << "POINTER: " << ptr << std::endl;
	std::cout << std::setw(15) << "REFERENCE: " << ref << std:: endl;
	
	return (0);
}