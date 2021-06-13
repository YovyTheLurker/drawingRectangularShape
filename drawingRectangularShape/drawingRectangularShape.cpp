// drawingRectangularShape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Drawing rectangular shape using nested for loops.

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int height, width;
	cout << " Enter height: ";
	cin >> height;
	cout << " Enter width: ";
	cin >> width;
	char symbol;
	cout << " Enter symbol--> ";
	cin >> symbol;

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(3) << symbol;

		}
		cout << endl;
	}




	system("pause>0");
}


