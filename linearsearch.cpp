#include <vector>
#include <iostream>

bool linearSearch(const std::vector<int>& set, int value)
{
	for (size_t i = 0; i <= set.size(); i++)
	{
		if(value == set[i])
		{
			return true;
		}
	}
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
	for (; begin < end; begin++)
	{
		if (value == *begin)
		{
			return true;
		}
	}
	return false;
}
