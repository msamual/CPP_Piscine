#include <iostream>

struct Data
{
	std::string str;
	std::string	str2;
};

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}


int	main()
{
	Data*	ptr = new Data;

	ptr->str = "Hello";
	ptr->str2 = "World";
	uintptr_t raw = serialize(ptr);
	Data*	res = deserialize(raw);

	std::cout << res->str << ' ' << res->str2 << std::endl;

	return 0;
}