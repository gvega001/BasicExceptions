// Basic Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void canGoWrong(bool error);
void mightGoWrong(bool error);

int main()
{
	bool error1 = true;
	bool error2 = false;
	try
	{
		canGoWrong(error1);
		canGoWrong(error2);
	}
	catch (int e)
	{
		std::cout << "Error Code" << e << std::endl;
	}
	catch (char const* e)
	{
		std::cout << "Error Message: "<<e<< std::endl;
	}
	catch (std::string &e)
	{
		std::cout << "String Error Message: " << e << std::endl;
	}

	std::cout << "Still Running" << std::endl;
	return 0;
}

void canGoWrong(bool error)
{
	mightGoWrong(error);

}
void mightGoWrong(bool error)
{
	if (error)
	{
		std::string message= "Something went wrong";
		throw message;
	}
}
