#include <vector>
#include <iostream>
void swap(int *val1, int *val2)
{
	int tmp;
	tmp = *val1;
	*val1 = *val2;
	*val2 = tmp;
}

void bubblesort(int *begin, const int *end)
{
	int i;
	for(i = 0; i < 2000; i++)
	{
		int *index = begin;
		for (; index < end; index++)
		{
			int *nextIndex = index+1;
			if ((*index > *nextIndex) && (nextIndex < end))
			{
				swap(index, nextIndex);
			}
		}
	}
}
