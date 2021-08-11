#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed& fixed);
		~Fixed();

		Fixed&	operator=(const Fixed& fixed);

		int		getRawBits() const;

		void	setRawBits(int const raw);

	private:

		int					_value;
		static const int	_fractional_bits = 8;
};

#endif