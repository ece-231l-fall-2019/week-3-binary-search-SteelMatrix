#include <vector>
#include <iostream>
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
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
