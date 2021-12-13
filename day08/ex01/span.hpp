#ifndef SPAN_HPP
# define SPAN_HPP
#include <exception>
#include <vector>
#include <string>
class span
{
	class isFull : public std::exception { const char	*what() const throw() {return ("is full.");} };

	class isTooShort : public std::exception { const char	*what() const throw() {return ("is too short.");} };
	class noSpan : public std::exception { const char	*what() const throw() {return ("no span.");} };
	public:
		span(unsigned int N) {}
		~span(void) {}
		void	addNumber(int elem);
		int		shortestSpan(void);
		int		longestSpan(void);
	private:
		unsigned int N;
		std::vector<int> arr;
};
# endif
