#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:

		T*		_array;
		size_t	_len;

	public:

		Array() : _array(0), _len(0) {};
		Array(unsigned int n) : _len(n)
		{
			if (n > 0)
				this->_array = new T[this->_len];
			else
				this->_array = 0;
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
		};
		Array(const Array<T>& arr) : _array(0), _len(0)
		{
			this->operator=(arr);
		};
		~Array()
		{
			if (this->_array)
				delete [] this->_array;
		};

		Array<T>&	operator=(const Array<T>& arr)
		{
			if (this->_len)
				delete [] this->_array;

			this->_len = arr._len;
			if (this->_len > 0)
			{
				this->_array	= new T[this->_len];
				for (unsigned int i = 0; i < this->_len; i++)
					this->_array[i] = arr._array[i];
			}
			else
				this->_array = NULL;
			return *this;
		};

		T&			operator[](size_t i)
		{
			if (i >= _len || i < 0)
				throw std::exception();
			return this->_array[i];
		};

		int	size() const
		{
			return _len;
		}
};

#endif