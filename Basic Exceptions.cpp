// Basic Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

void canGoWrong();

int main()
{
	canGoWrong();
	return 0;
}

void canGoWrong()
{
	bool error = true;
	try
	{
		if (error)
		{
			throw 8;
		}
	}
	catch (int e)
	{
		std::cout << "Error Code" << e << std::endl;
	}

	std::cout << "Still Running"<< std::endl;

}