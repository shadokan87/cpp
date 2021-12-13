#ifndef CAST_HPP
# define CAST_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <ios>
#include <iomanip>
#define do_if(A, C1) if (C1){A};
typedef std::string str;
class	Cast
{
	public:
		Cast(void);
		~Cast(void);
		Cast(str elem);
		Cast &operator=(Cast &src);
		void	print(void);
	private:
		int		_int;
		float	_float;
		double	_double;
		char	_char;
		str		arg;
};

#endif
