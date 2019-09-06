#include <vector>
#include <iostream>

bool linearSearch(const std::vector<int>& set, int value)
{
	// TODO:
	// implement me
	for (int i = 0; i <= set.size(); i++)
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
	return false;
}
