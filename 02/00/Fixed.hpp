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
		Fixed &operator=(Fixed &dst);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};
