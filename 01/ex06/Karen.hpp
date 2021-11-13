#include <iostream>

typedef std::string str;

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(str);
		Karen(void);
		~Karen(void);
};
