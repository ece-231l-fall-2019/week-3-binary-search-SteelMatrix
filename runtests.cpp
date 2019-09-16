#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Timer.h"
#include "search.h"
#include "sort.h"

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

	std::string confirm, file1, file2;

	// TODO:
	// read the file "numbers" into the numbers vector
	// read the file "search" into the search vector
	// since you're basically doing the same thing twice,
	// write a function to read a single file into a vector
	// and then call this function twice.

	//User File Input
	std::cout << "Use Default Files (Y/N)? ";
	std::cin >> confirm;

	if ((confirm == "Y") || (confirm == "y"))
	{
		loadFile("numbers", numbers);
		loadFile("search", search);
	}

	else if ((confirm == "N") || (confirm == "n"))
	{
		std::cout << "\n#NOTICE#\nBe sure that the data set is sorted (least to greatest)\nEnter the file path for the number dataset to search: ";
		std::cin >> file1;
		std::cout << "\nEnter the file path for the search numbers: ";
		std::cin >> file2;
		std::cout << "Confirmed. Using custom files...\n";
		loadFile(file1, numbers);
		loadFile(file2, search);
	}

	else
	{
		std::cout << "\n\nIncorrect input. Please relaunch the program.\n";
		return 0;
	}

	bubblesort(search.data(), search.data() + search.size());

	for(size_t i = 0; i < search.size(); i++)
	{
		std::cout << search[i] << " ";
		std::cout << "\n";
	}


	std::cout << "\n";

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

	std::cout << "\n";

	{
		Timer timer("Time to linear search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (linearSearch(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}

	// TODO:
	// repeat the above two blocks but use the binary search functions.
	std::cout << "\n";
	{
		Timer timer("Time to binary search all values: ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers, search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
	std::cout << "\n";
	{
		Timer timer("Time to binary search all values (pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearch(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
	std::cout << "\n";
	{
		Timer timer("Time to binary search all values (recursive, pointers): ");

		int found = 0;
		for (size_t i = 0; i < search.size(); i++)
		{
			if (binarySearchRecursive(numbers.data(), numbers.data() + numbers.size(), search[i]))
				found++;
		}

		std::cout << "Found "<< found << "/"
			<< search.size() << " values." << std::endl;
	}
	return 0;
}

