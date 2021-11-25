/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ernesto Santos
 */


#include <iostream>
using namespace std;

int getVal(string input, string values[]);

const int ARR_LEN = 20;

int main()
{
	string numbers[] = {
		"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
		"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"
	};
	int num1, num2, result;
	string operand1, operand2, operation;
	bool isValid = true;

	cout << "Input two operands and the operantion: ";
	cin >> operand1 >> operand2 >> operation;

	num1 = getVal(operand1, numbers);
	num2 = getVal(operand2, numbers);


	//Reads the operation and does the algebra
	if (num1 != -1 || num2 != -1)
	{
		if (operation == "+" || operation == "plus")
		{
			result = num1 + num2;
		}
		else if (operation == "-" || operation == "minus")
		{
			result = num1 - num2;
		}
		else if (operation == "*" || operation == "mul")
		{
			result = num1 * num2;
		}
		else if (operation == "/" || operation == "div")
		{
			result = num1 / num2;
		}
		else
		{
			cout << "Operation was not valid";
			isValid = false;
		}

		if (isValid)
			cout << "Result: " << result << "\n\n";
	}

}


//Returns an int value from the string
int getVal(string input, string values[])
{
	int retVal;

	for (int i = 0; i < ARR_LEN; i++)
	{
		if (input == values[i])
			return i % 10;
	}

	return -1;
}

/*
 *  Write a program that performs as a very simple
calculator. Your calculator should be able to handle the
four basic math operations — add, subtract, multiply,
and divide — on two input values. Your program should
prompt the user to enter three arguments: two double
values and a character to represent an operation. If the
entry arguments are 35.6, 24.1, and '+', the program
output should be The sum of 35.6 and 24.1 is 59.7. In
Chapter 6 we look at a much more sophisticated simple
calculator

ex07
Modify the “mini calculator” from exercise 5 to accept
(just) single-digit numbers written as either digits or
spelled out.
 */