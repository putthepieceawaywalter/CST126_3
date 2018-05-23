// word.h
#include "stdafx.h"
#include <string>

class word 
{
public:

std::string getWord();
void print();
int getCount();
void setCount();
void setWord(std::string);


word()
{
	int p_count = getCount();
	dictionary;
}

word(int * size_ptr, std::string apple, word wordArray[])
{
	size_ptr;
	apple;

}
private:
	int count = 0;
	std::string dictionary;
	int * size_ptr;

};

void wordCount(int elementCounter, std::string apple, word wordArray[]);
std::string filter(std::string);
void wordRanker(word wordArray[], word sort[], int * size_ptr);
void bubbleSort(word sort[]);
