//Austin Byrd
//Project 3
// Binary to Decimal Conversion with Stacks
// CSC 161

 //libraries
#include <iostream>
#include <cmath>
#include "linkedStack.h"
  
//namespace
using namespace std;

//function to run the program
int main()
{
	//declare variable/assign values
	linkedStackType<int> stack;
	int decimalNum = 0; 
	int	bitWeight = 0;
	int binNum;
	int bit;

	//Collect input Number in Binary form
	cout << "Enter a binary number: ";
	cin >> binNum;
	cout << endl;

	//push input number onto stack
	while (binNum > 0) 
	{
		//push the first value onto stack remove the number from the input number 
		//and repeat till the number is entered into the stack
		stack.push(binNum % 10);
		bitWeight++;
		binNum = binNum / 10;
	}

	//convert the stack values into powers of 2 and sum each iteration for the final decimal number. 
	while (!stack.isEmptyStack()) 
	{
		//find the value of the binary number in decimal form 
		//pop that value off the stack and continue till the number is processed fully
		bitWeight--;
		bit = stack.top();
		stack.pop();
		decimalNum = decimalNum + bit * static_cast<int>(pow(2.0, bitWeight));
	}

	//return the final converted number in decimal form and terminate program
	cout << "The input converted to Decimal form is: " << decimalNum << endl;
	return 0;

}

