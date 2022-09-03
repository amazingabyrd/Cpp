//Austin Byrd
//Computer Science I
//Multidimensional array temperature conversion program
//Final Homework

//libraries
#include <iostream>
#include <iomanip>

//namespace for iostream
using namespace std;

// declaring functions
void showMenu();
double celsConv(double temp);
double kelvConv(double temp);

//declaring array size and array
const int ARRAY1_SIZE = 10;
const int ARRAY2_SIZE = 3;
double arr[ARRAY1_SIZE][ARRAY2_SIZE] = {};

int main()
{
	//Program Initiation Message
	cout<<"This program converts a temperature in Fahrenheit to Celcius or Kelvin.\nNOTE: A Maximum of 10 temperatures can be entered.";
	//initiate program
	showMenu();
}

//functions for conversion
double celsConv(double temp) {
	return (temp - 32.0) * (5.0 / 9.0);
}

double kelvConv(double temp) {
	celsConv(temp) + 273.15;
}

//function for program decision inputs and outputs
void showMenu()
{
	int loop = 0;
	//input and loop control variables
	int in = 0;
	double temp = 0.0;
	//loop for program interface
	do
	{
		//Decision
		cout << "\n\nSelect one of the following menu options:\n\t1. Convert Fahrenheit to Celsius (Centigrade)";
		cout << "\n\t2. Convert Fahrenheit to Kelvin\n\t3. Display Data\n\t4. Quit\nEnter your choice: ";

		//assign options input to variable
		cin >> in;

		//Fahrenheit to Celsius
		if (in == 1)
		{
			cout << "\nEnter a Fahrenheit temperature: ";
			cin >> temp;
			cout << endl << fixed<< setprecision(2) temp << " Fahrenheit = " << celsConv(temp) << " Celsius\n" << endl;
			arr[loop][2] = celsConv(temp);
			arr[loop][3] = kelvConv(temp);
		}

		//Fahrenheit to Kelvin
		if (in == 2)
		{
			cout << "\nEnter a Fahrenheit temperature: ";
			cin >> temp;
			cout << endl << fixed <<setprecision(2)<< temp << " Fahrenheit = " << kelvConv(temp) << " Kelvin\n" << endl;
			arr[loop][2] = celsConv(temp);
			arr[loop][3] = kelvConv(temp);
		}

		//Display data
		if (in == 3 || loop == 9)
		{
			cout << "Fahrenheit: \t\t";

			for (int j = 1; j < 4; j++)
			{
				if (j == 2)
				{
					cout << "\nCelsius: \t\t";
				}
				if (j == 3)
				{
					cout << "\nKelvin: \t\t";
				}
				for (int i = 0; i < 10; i++)
				{
					cout <<fixed<<setprecision(2)<< arr[i][j] << "\t";
				}
			}
			cout << endl;
		}

			// Farewell Statment
			if (in == 4)
			{
				cout << "Thank you for using the Temperature Conversion program - Good-bye";
			}

			//Invalid input check
			if (in != 1 && in != 2 && in != 3 && in != 4)
			{
				cout << "Error: Invalid input. Enter an integer from 1-4" << endl;
			}
			if (loop >= 10)
			{
				cout << "Error: Input overflow program terminated"
			}

			arr[loop][1] = temp;
			//counter and input controlled loop
			//make sure the program only lets them enter 10 numbers for conversion
			loop ++;
	} //loop condition
	while (in != 4 && loop <=10);
}