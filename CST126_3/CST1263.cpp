// CST1263.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "word.h"

int main()
{

	int arraySize;
	int * size_ptr = &arraySize;

	std::ifstream input_file;
	std::string arraySizeString;
	std::string file_name;
	std::cout << "Enter the file name" << std::endl;
	std::cin >> file_name;
	input_file.open(file_name);
	if (input_file.is_open())
	{
		char a = input_file.get();
		while (a > 47 && a < 58)
		{
			arraySizeString += a;
			a = input_file.get();

		}

		arraySize = atoi(arraySizeString.c_str());


		word * wordArray = new word[arraySize];
		std::getline(input_file, arraySizeString);

		std::string apple;
		while (!input_file.eof())
		{
			input_file >> apple;
			apple = filter(apple);

			int elementCounter = 0;
			wordCount(elementCounter, apple, wordArray);
		}

		word sort[10];
		for (int i = 0; i < 10; i++)
		{
			sort[i] = wordArray[i];
		}

		wordRanker(wordArray, sort, size_ptr);


		std::cout << "These are the 10 most common words in the file: " << file_name << std::endl;
		for (int i = 0; i != 10; i++)
		{
			std::string a = sort[i].getWord();
			int b = sort[i].getCount();
			std::cout << a << " appears " << b << " times" << std::endl;
		}


		input_file.close();
		delete[] wordArray;
		return 0;
	}
}
