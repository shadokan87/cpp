#include <iostream>

class Fixed
{
	private:
		int	elem;
		static const int bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(int elem);
		Fixed &operator=(const Fixed &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};
