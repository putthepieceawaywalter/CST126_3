#include "stdafx.h"
#include <string>
#include <iostream>
#include "word.h"

std::string word::getWord()
{
	return dictionary;
}

int word::getCount()
{
	return count;
}

void word::print()
{
	std::string print_wrd = dictionary;
}

void word::setCount()
{
	count++;

}

void word::setWord(std::string apple)
{
	dictionary = apple;

}

void wordCount(int elementCounter, std::string apple, word wordArray[])

{
	std::string arrayWord = wordArray[elementCounter].getWord();

		if (arrayWord.empty())
		{
			wordArray[elementCounter].setWord(apple);
		}
	
		if (arrayWord > apple || arrayWord < apple && !arrayWord.empty())
		{
		elementCounter++;
		wordCount(elementCounter, apple, wordArray);
		}

		if (arrayWord == apple)
		{
			wordArray[elementCounter].setCount();
			
		}
}

void wordRanker(word wordArray[], word sort[], int * size_ptr)
{
	bubbleSort(sort);
	
	int count = 11;
	
	
	while (wordArray[count].getCount() > 0 && count < *size_ptr)
	{
		if (wordArray[count].getCount() > sort[9].getCount())
		{
			sort[9] = wordArray[count];
			bubbleSort(sort);
		}

		count++;
	}

}

void bubbleSort(word sort[])
{	
	word tempArray[1];
	int a = 0;
	int b = 1;
	while (b < 10)
	{
		if (sort[a].getCount() < sort[b].getCount())
		{
			
			tempArray[0] = sort[b];
			sort[b] = sort[a];
			sort[a] = tempArray[0];
		}
		a++;
		b++;
	
	}
	if (sort[0].getCount() < sort[1].getCount() || sort[1].getCount() < sort[2].getCount()
		|| sort[2].getCount() < sort[3].getCount() || sort[3].getCount() < sort[4].getCount()
		|| sort[4].getCount() < sort[5].getCount() || sort[5].getCount() < sort[6].getCount()
		|| sort[6].getCount() < sort[7].getCount() || sort[7].getCount() < sort[8].getCount()
		|| sort[8].getCount() < sort[9].getCount())


		{
			bubbleSort(sort);
		}
}

std::string filter(std::string apple)
{
	std::string temp;
	size_t length = apple.length();
	for (int i = 0; i < length; i++)
	{
		char a = apple[i];
		
		
		if (isalpha(a) || isdigit(a))
		{
			if (isupper(a))
			{
				a = tolower(a);
			}
			temp += a;
		}
	
	}
	apple = temp; 
	return apple;
}
