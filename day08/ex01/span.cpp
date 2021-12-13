#include "./span.hpp"
#include <cstdlib>
#include <iostream>
typedef std::string str;
typedef std::vector<int>::iterator v_int_iter;
void	span::addNumber(int elem)
{
	if (arr.size() == N)
		throw isFull();
	else
		arr.push_back(elem);
}

int	findRegex(std::vector<int> &arr, str mode, int regex, bool yesRegex)
{
	v_int_iter i = arr.begin();
	v_int_iter end = arr.end();
	int	current = *i;
	if (current == regex && yesRegex)
	{
		while (i != end && *i == regex)
			i++;
		current = *i;
		if (i == end)
			return (regex);
	}
	while (i != end)
	{
		if ((mode == "short" && *i < current
			|| mode == "long" && *i > current))
		{
			if (!yesRegex || (yesRegex && *i != regex))
				current = *i;
		}
		i++;
	}
	return (current);
}

int	span::shortestSpan(void)
{
	int first = findRegex(arr, "short", 0, false);
	int second = findRegex(arr, "short", first, true);

	if (!(arr.size() >= 2))
		throw isTooShort();
	if (second == first)
		throw noSpan();
	else
		return (second - first);
}

int	span::longestSpan(void)
{
	int first = findRegex(arr, "long", 0, false);
	int second = findRegex(arr, "short", 0, false);

	if (!(arr.size() >= 2))
		throw isTooShort();
	if (second == first)
		throw noSpan();
	else
		return (first - second);
	return (0);
}
