#include <vector>
#include "search.h"
#include <iostream>

bool binarySearch(const std::vector<int>& set, int value) {
	size_t left = 0;
	size_t right = set.size() - 1;

	while (left < right)
	{
		size_t mid = (left + right)/2;

		if (set[left] == value)
			return true;
		if (set[mid] == value)
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

bool binarySearch(const int *begin, const int *end, int value) {
	while(true)
	{
		const int *mid = begin + (end - begin) / 2;
		if ((mid == end)||(begin >= end))
			return false;
		if (*mid == value)
			return true;
		if(*mid > value)
		{
			end = mid;
		}
		else
		{
			begin = mid + 1;
		}
	}
	return false;
}

bool binarySearchRecursive(const int *begin, const int *end, int value)
{
	const int *mid = begin + (end - begin) / 2;
	if (mid == end)
		return false;
	if (*mid == value)
	{
		return true;
	}
	if (*mid > value)
	{
		end = mid;
		return binarySearchRecursive(begin, end, value);
	}
	else
	{
		begin = mid + 1;
		return binarySearchRecursive(begin, end, value);
	}
	return false;
}

