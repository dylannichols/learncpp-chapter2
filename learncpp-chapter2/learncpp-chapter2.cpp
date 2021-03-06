// learncpp-chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

double getInput()
{
	std::cout << "Enter a double value: ";
	double input;
	std::cin >> input;
	return input;
}

char getSymbol()
{
	std::cout << "Enter one of the following: +, -, *, or /: ";
	char input;
	std::cin >> input;
	return input;
}

void printAnswer(double x, double y, char symbol)
{
	if (symbol == '+')
		std::cout << x << " + " << y << " is " << x + y;
	else if (symbol == '-')
		std::cout << x << " - " << y << " is " << x - y;
	else if (symbol == '*')
		std::cout << x << " * " << y << " is " << x * y;
	else if (symbol == '/')
		std::cout << x << " / " << y << " is " << x / y;
}

int main()
{
	double x(getInput());
	double y(getInput());
	char symbol(getSymbol());
	printAnswer(x, y, symbol);
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
