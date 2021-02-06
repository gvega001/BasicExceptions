// Basic Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void canGoWrong(bool error);
void mightGoWrong(bool error);
void willGoWrong(bool error);


int main()
{
	bool error1 = true;
	bool error2 = true;
	try
	{
		canGoWrong(error1);
		canGoWrong(error2);
	}
	catch (int e)
	{
		cout << "Error Code" << e << endl;
	}
	catch (char const* e)
	{
		cout << "Error Message: "<<e<< endl;
	}
	catch (std::string &e)
	{
		cout << "String Error Message: " << e << endl;
	}
	catch (char e)
	{
		cout << "Char Error Message:" << e << endl;
	}

	cout << "Still Running" << endl;
	return 0;
}

void canGoWrong(bool error)
{
	//mightGoWrong(error);
	//throw 4;
	willGoWrong(error);
}
void mightGoWrong(bool error)
{
	if (error)
	{
		string message = "Something went wrong";
		throw message;
	}
	
}
void willGoWrong(bool error)
{
	if(error)
	{
		char e = 'e';
		throw e;
	}
}

