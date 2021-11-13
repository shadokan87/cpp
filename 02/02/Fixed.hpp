#include <iostream>
//#define const Fixed &src const Fixed &src,const Fixed &dst

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
		bool operator>(const Fixed &src) const;
		bool operator<(const Fixed &src) const;
		bool operator==(const Fixed &src) const;
		bool operator>=(const Fixed &src) const;
		bool operator<=(const Fixed &src) const;
		bool operator!=(const Fixed &src) const;
		Fixed operator+(Fixed const &src);
		Fixed operator-(Fixed const &src);
		Fixed operator*(Fixed const &src);
		Fixed operator/(Fixed const &src);
		Fixed operator++(void);
		Fixed operator--(void);
		//Fixed operator++(void);
		//Fixed operator--(void);
		int	toInt(void) const;
		float toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &src);
