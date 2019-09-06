#include <vector>
#include "search.h"
#include <iostream>

bool binarySearch(const std::vector<int>& set, int value)
{
	// TODO:
	// implement me
	size_t left = 0;
	size_t right = set.size() - 1;

	while (left < right)
	{
		size_t mid = (left + right)/2;

		if (set[mid] == value)
			return true;
		if (set[left] == value)
			return true;
		if (set[right] == value)
			return true;

		if (set[mid] > value)
		{
			right = mid - 1;
		}

		else
		{
			left = mid + 1;
		}
	}
	return false;
}

bool binarySearch(const int *begin, const int *end, int value)
{
	// TODO:
	// implement me
//	int *mid = begin + (end - begin) / 2
	return false;
}

