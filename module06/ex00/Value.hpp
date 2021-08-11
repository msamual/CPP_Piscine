#ifndef VALUE_HPP
# define VALUE_HPP

# define CHAR		1
# define INT		2
# define FLOAT		3
# define DOUBLE 	4
# define NaN		5
# define NaNF		6
# define INF		7
# define INF_NEG	8
# define INF_POS	9
# define CHARQ		10

# define RED 		"\033[0;31m"
# define WHITE 		"\033[0m"

# include <iostream>
# include <ostream>

class Value
{
	private:

		Value();

		std::string		_input;
		int				_type;

		double			_double;
		int				_int;
		float			_float;
		char			_char;

		double			_value;

	public:

		Value(std::string input);
		Value(const Value& value);
		~Value();

		Value&		operator=(const Value& value);

		void		printInput();
		void		printDouble();
		void		trimInput();
		int			defType();
		int			getType();
		bool		isNumber();
		void		printResult();
		void		toInt();
		void		toFloat();
		void		toDouble();
		void		toChar();
		void		startChar();
		void		startInt();
		void		startFloat();
		void		startDouble();
};

#endif