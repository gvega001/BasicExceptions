// Basic Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void canGoWrong();

int main()
{
	canGoWrong();
	return 0;
}

void canGoWrong()
{
	bool error = true;

	if(error)
	{
		throw 8;
	}
}