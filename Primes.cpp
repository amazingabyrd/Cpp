//Austin Byrd
//Prime Integers Analysis
// Extra Credit Homework 1
//CSC 161
// User enters a number between 1 and 1000, program outputs if number is prime and if not what 

//libraries
#include <iostream>

//namespace standard
using namespace std;
//declare prime arrays
int arr1[11] = {2,3,5,7,11,13,17,19,23,29,31};
int arr2[11] = {};

//function for program
int main()
{
    //declare input variable for integer
    int x;
    //get number from user and assign it to variable
    cout << "Enter an integer between 1 and 1000(inclusive): ";
    cin >> x;

    //check if its prime
    //declare boolean value variable
    bool isPrime = true;
    //check if number is 0 or 1
    if (x == 0 || x == 1) 
    {
        isPrime = false;
    }
    else 
    {
        for (int l = 2; l <= x / 2; l++) 
        {
            if (x % l == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }

    //check which numbers the input number is divisible by and save them
    for (int j = 0; j <= 10; j++) 
    {
        if (x % arr1[j] == 0) 
        {
            arr2[j] = arr1[j];
        }
    }

    //print result
    if (isPrime == false) 
    {
        cout << "The number is not prime. and is divisible by "<<"\n";
        for (int i = 0; i <= 10; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    else
        cout << "The number is prime!\n"; 
}