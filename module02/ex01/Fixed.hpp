#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed& fixed);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();

		Fixed&	operator=(const Fixed& fixed);

		int		getRawBits() const;

		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;


	private:

		int					_value;
		static const int	_fractional_bits;
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& fixed);

#endif