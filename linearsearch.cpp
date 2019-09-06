#include <vector>
#include <iostream>

bool linearSearch(const std::vector<int>& set, int value)
{
	// TODO:
	// implement me
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
	// TODO:
	// implement me
	for (begin; begin < end; begin++)
	{
		if (value == *begin)
		{
			return true;
		}
	}
	return false;
}
