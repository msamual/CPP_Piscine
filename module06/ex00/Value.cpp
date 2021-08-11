#include "Value.hpp"

Value::Value(std::string input) : _input(input)
{
	this->_type = this->defType();
}

Value::Value(const Value& value)
{
	this->operator=(value);
}

Value::~Value()
{}

Value&	  Value::operator=(const Value& value)
{
	this->_input	= value._input;
	this->_type	 	= value._type;
	return *this;
}

int			Value::getType()
{
	return this->_type;
}

void		Value::printInput()
{
	std::cout << "input: \"" << this->_input << "\"" << std::endl;
}

void		Value::printDouble()
{
	std::cout << this->_double << std::endl;
}

void		Value::trimInput()
{
	this->_input.erase(0, this->_input.find_first_not_of(" \n\r\t"));
	this->_input.erase(this->_input.find_last_not_of(" \n\r\t")+1);
}

bool		Value::isNumber()
{
	int		i = 0;
	int		len = this->_input.length();
	int		dotCount = 0;

	if (this->_input[i] == '+' || this->_input[i] == '-')
		i++;
	if (this->_input[len - 1] == 'f')
		len--;
	for (; i < len; i++)
	{
		if (this->_input[i] == '.')
		{
			dotCount++;
			i++;
		}
		if (dotCount > 1)
			return false;
		if (!std::isdigit(this->_input[i]) )
			return false;
	}
	return true;
}

int			Value::defType()
{
	this->trimInput();
	std::string		input = this->_input;
	
	if (input == "nan")
		return NaN;
	else if (input == "nanf")
		return NaNF;
	else if (input == "inf")
		return INF;
	else if (input == "+inf")
		return INF_POS;
	else if (input == "-inf")
		return INF_NEG;
	else if (input.length() == 3 && input[0] == '\'' && input[2] == '\'')
		return CHARQ;
	else if (input.length() == 1 && !std::isdigit(input[0]))
		return CHAR;
	else if (this->isNumber())
	{
		if (input.find('.') != std::string::npos)
		{
			if (input[input.length() - 1] == 'f')
				return FLOAT;
			return DOUBLE;
		}
		return INT;
	}
	else
		return 0;
}

void	Value::toChar()
{
	if (this->_type == INT && this->_int > 31 && this->_int < 127)
		this->_char = static_cast<char>(this->_int);
	else if (this->_type == FLOAT && this->_float > 31 && this->_float < 127)
		this->_char = static_cast<char>(this->_float);
	else if (this->_type == DOUBLE && this->_double > 31 && this->_double < 127)
		this->_char = static_cast<char>(this->_double);
	else
		this->_char = 0;

	if (this->_char < 32 || this->_char > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->_char << std::endl;
}

void	Value::toInt()
{
	if (this->_type == CHAR || this->_type == CHARQ)
		this->_int = static_cast<int>(this->_char);
	else if (this->_type == FLOAT)
		this->_int = static_cast<int>(this->_float);
	else if (this->_type == DOUBLE)
		this->_int = static_cast<int>(this->_double);
	
	std::cout << "int: " << this->_int << std::endl;
}

void	Value::toFloat()
{
	if (this->_type == CHAR || this->_type == CHARQ)
		this->_float = static_cast<float>(this->_char);
	else if (this->_type == INT)
		this->_float = static_cast<float>(this->_int);
	else if (this->_type == DOUBLE)
		this->_float = static_cast<float>(this->_double);

	std::cout << "float: " << this->_float;
	if (this->_float - this->_int == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Value::toDouble()
{
	if (this->_type == CHAR || this->_type == CHARQ)
		this->_double = static_cast<double>(this->_char);
	else if (this->_type == INT)
		this->_double = static_cast<double>(this->_int);
	else if (this->_type == FLOAT)
		this->_double = static_cast<double>(this->_float);

	std::cout << "double: " << this->_double;
	if (this->_float - this->_int == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	Value::startChar()
{
	if (this->_type == CHAR)
		this->_char = this->_input[0];
	else
		this->_char = this->_input[1];
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

void	Value::startInt()
{
	try
	{
		this->_int = std::stoi(this->_input);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "INT OWERFLOW" << WHITE << std::endl;
		this->_int = 2147483647;
	}
	
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

void	Value::startFloat()
{
	this->_float = std::stof(this->_input);
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

void	Value::startDouble()
{
	this->_double = std::stod(this->_input);
	this->toChar();
	this->toInt();
	this->toFloat();
	this->toDouble();
}

void	Value::printResult()
{
	if (this->_type == NaN || this->_type == NaNF)
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (this->_type == INF)
		std::cout << "char: impossible\nint: impossible\nfloat: inff\ndouble: inf" << std::endl;
	else if (this->_type == INF_POS)
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
	else if (this->_type == INF_NEG)
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else if (this->_type == CHAR || this->_type == CHARQ)
		this->startChar();
	else if (this->_type == INT)
		this->startInt();
	else if (this->_type == FLOAT)
		this->startFloat();
	else if (this->_type == DOUBLE)
		this->startDouble();
	else
		std::cout << "Error: invalid value" << std::endl;
}