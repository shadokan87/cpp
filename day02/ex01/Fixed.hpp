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
		Fixed(float elem);
		Fixed &operator=(const Fixed &dst);
		int	toInt(void) const;
		float toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &src);
