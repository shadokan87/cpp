#include <iostream>
#include <fstream>
#define $ADD "ADD"
#define $SEARCH "SEARCH"
#define $EXIT "EXIT"
#define $ENDL "\n"
#define CMD(e) out << e << std::endl;

int	main(void)
{
	std::ofstream out;

	out.open("testfile");
	CMD($ADD);
	for (int i = 0;i < 9;i++)
	{
		for (int y = i;y < i  + 5;y++)
			CMD(y);
		CMD($SEARCH);
		CMD($EXIT);
		CMD($ADD);
	}
	// ----
	for (int i = 0;i < 1;i++)
	{
		for (int y = i;y < i  + 5;y++)
			CMD("override");
		CMD($SEARCH);
		CMD($EXIT);
		CMD($ADD);
	}
	out.close();
}
