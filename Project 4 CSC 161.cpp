#include <iostream>
#include <ctime>
#include "searchSortAlgorithms.h"
#include "stdafx.h"

using namespace std;

// Code for array size and function protoypes for test program
const int ARRAY_SIZE = 100000;

void fill(int list[], int size);
void copyList(int list[], int temp[], int length);

int main()
{
	// Code for creation of arrays and clock times 
	int integerList[ARRAY_SIZE];
	int temp[ARRAY_SIZE];

	// Fill and copy code for data in arrays
	clock_t startTime1, endTime1;
	clock_t startTime2, endTime2;
	clock_t startTime3, endTime3;
	clock_t startTime4, endTime4;

	//get random numbers
	fill(integerList, ARRAY_SIZE);
	copyList(integerList, temp, ARRAY_SIZE);

	//Quick sort: The pivot is the middle element
	// start time1
	startTime1 = clock();
	// quickSort function call
	quickSort(integerList, ARRAY_SIZE);
	// endTime1 
	endTime1 = clock();

	//Quick sort: The pivot is the median element
	// call to copyList
	copyList(temp, integerList, ARRAY_SIZE);
	// startTime2 
	startTime2 = clock();
	//	call to quickSortMedianPivot
	quickSortMedianPivot(integerList, ARRAY_SIZE);
	// endTime2 = clock();
	endTime2 = clock();


	//Quick sort with insertion sort 
	//The pivot is the middle element
	// copyList(temp, intlist, SIZE);
	copyList(temp, integerList, ARRAY_SIZE);
	// startTime3 = clock();
	startTime3 = clock();
	// call of quickSortWithInsertionSort
	quickSortWithInsertionSort(integerList, ARRAY_SIZE);
	// endTime3 = clock();
	endTime3 = clock();

	//Quick sort with insertion sort 
	//The pivot is the median element
	// copyList(temp, intlist, SIZE);
	copyList(temp, integerList, ARRAY_SIZE);
	// startTime4 = clock();
	startTime4 = clock();
	// call to quickSortMedianWithInsertionSort(intlist, SIZE);		 
	quickSortMedianWithInsertionSort(integerList, ARRAY_SIZE);
	// endTime4 = clock();
	endTime4 = clock();

	// output with endtime - start time for "Quick sort time, with pivot middle element: "
	cout << "Quick sort duration, with the pivot being the middle element: " << endTime1 - startTime1 << endl;
	// output with endtime - start time for "Quick sort time, with pivot median element: "
	cout << "Quick sort duration, with the pivot being the median element: " << endTime2 - startTime2 << endl;
	// output with endtime - start time for "Quick sort and insertion sort time, with pivot middle element"
	cout << "Quick sort and insertion duration, with the pivot being the middle element: " << endTime3 - startTime3 << endl;
	// output with endtime - start time for "Quick sort and insertion sort time, with pivot median element:" 
	cout << "Quick sort and insertion duration, with the pivot being the median element: " << endTime4 - startTime4 << endl;
	char pause;
	cout << "Enter Q to Quit: ";
	cin >> pause;
	return 0;
}

void fill(int list[], int length)
{
	srand(time(0));
	for (int index = 0; index < length; index++)
	{
		list[index] = rand();
	}
}


void copyList(int list[], int temp[], int length) 
{
	for (int i = 0; i < length; i++)
		temp[i] = list[i];
}

