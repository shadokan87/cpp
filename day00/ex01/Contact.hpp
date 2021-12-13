#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cctype>
typedef std::string str;
class	contact
{
	private:
		void	addInfo(int pos, str elem);
	public:
		str info[5];
		contact(void);
};
