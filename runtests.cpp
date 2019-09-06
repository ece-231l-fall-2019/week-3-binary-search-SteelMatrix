#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Timer.h"
#include "search.h"

void loadFile(std::string filename, std::vector<int>& set)
{
	std::ifstream fin(filename);
	while(true)
	{
		int val;
		fin >> val;
		if(fin.eof())
			break;
		set.push_back(val);
	}
	fin.close();
}

int main()
{
	std::vector<int> numbers;
	numbers.reserve(1000000);
	std::vector<int> search;
	search.reserve(2000);

	// TODO:
	// read the file "numbers" into the numbers vector
	// read the file "search" into the search vector
	// since you're basically doing the same thing twice,
	// write a function to read a single file into a vector
	// and then call this function twice.
	loadFile("numbers", numbers);
	loadFile("search", search);

	{
		Timer timer("Time to linear search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(),
					search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	// TODO:
	// repeat the above two blocks but use the binary search functions.

	return 0;
}

