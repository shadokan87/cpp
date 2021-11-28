#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
typedef std::string str;

char	*StrToChar(str src)
{
	const int size = src.size();
	char *ret = new char[size + 1];
	for (int i = 0;i < size;i++)
		ret[i] = src[i];
	ret[size] = '\0';
	return (ret);
}

str	_sed(str src, str foo2, str bar)
{
	str buff = "";
	char	*foo = StrToChar(foo2);

	int	size = foo2.size();
	int	ret = src.find(foo, 0, size);
	while (ret != -1)
	{
		buff += src.substr(0, ret);
		buff += bar;
		src = src.substr(ret + size);
		ret = src.find(foo, 0, size);
	}
	buff += src;
	delete[ ] foo;
	return (buff);
}

str	strUpper(str elem)
{
	for (str::iterator beg = elem.begin();beg != elem.end();beg++)
		*beg = toupper(*beg);
	return (elem);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: <filename> <foo> <bar>" << std::endl;
		return (1);
	}
	for (int i = 1;i < argc;i++)
	{
		str current = argv[i];
		if (current == "")
		{
			std::cout << "Error: arguments cannot be emty" << std::endl;
			return (0);
		}
	}
	std::ifstream src(argv[1]);
	std::ofstream dst(strUpper(static_cast<str>(argv[1]) + ".replace"));
	str line;
	str buff = "";
	if (src.fail() || !src.is_open())
	{
		std::cout << "failed to open file \"" << argv[1] << "\" for reading" << std::endl;
		return (1);
	}
	if (dst.fail() || !dst.is_open())
	{
		std::cout << "failed to open file \"" << argv[1] << ".replace" << "\" for writing" << std::endl;
		return (1);
	}
	while (std::getline(src, line))
		buff += _sed(line, argv[2], argv[3]) + "\n";
	dst << buff;
	dst.close();
	src.close();
	return (0);
}
