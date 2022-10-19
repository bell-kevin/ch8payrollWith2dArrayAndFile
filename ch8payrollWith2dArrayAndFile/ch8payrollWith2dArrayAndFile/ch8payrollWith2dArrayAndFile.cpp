// ch8payrollWith2dArrayAndFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	std::cout << "Chapter 8 Payroll with 2D Array & File by Kevin Bell\n\n";
	//Declare variables
	const int NUM_EMPLOYEES = 6;
	const int NUM_DAYS = 5;
	double hrsWorked[6][6]; //2D array to hold hours worked
	double payRate[6]; //array to hold pay rate
	double pay[6]; //array to hold pay
	double totalHoursWorked = 0; //total hours worked
	double totalPay = 0; //variable to hold total pay
	int i = 0; //loop counter
	int j = 0; //loop counter
	
	//Open file
	ifstream inputFile;
	inputFile.open("payroll.txt");
	
	//Read data from file
	if (!inputFile) {
		
		cout << "Error opening file. Program terminating.\n";
	} 
	else {
		//Read data from file
		while (inputFile >> payRate[i]) {
			for (j = 0; j < NUM_DAYS; j++) {
				inputFile >> hrsWorked[i][j];
			} //end for
			i++;
		} //end while
		//Close file
		inputFile.close();
	} //end else
	
	//Display hours worked by each employee
	cout << "Hours worked by each employee:\n\n";
	for (i = 0; i < NUM_EMPLOYEES; i++) {
		cout << "Employee " << i + 1 << ": ";
		for (j = 0; j < NUM_DAYS; j++) {
			cout << fixed << setprecision(2) << hrsWorked[i][j] << "    ";
		}
		cout << endl;
	} //end for loop
	cout << endl;
	cout << "Payroll" << endl << endl;
	cout << "Employee\tPay Rate\tHours Worked\tPay" << endl;
	cout << "------------------------------------------------------------" << endl;
	//Calculate pay for each employee and total payroll
	for (i = 0; i < NUM_EMPLOYEES; i++) {
		pay[i] = 0;
		for (j = 0; j < NUM_DAYS; j++) {
			pay[i] += hrsWorked[i][j] * payRate[i];
			totalHoursWorked += hrsWorked[i][j];
		} //end for
		totalPay += pay[i];
		cout << i + 1 << "\t\t" << payRate[i] << "\t\t" << totalHoursWorked << "\t\t" << fixed << setprecision(2) << pay[i] << endl;
		totalHoursWorked = 0;
	} //end for loop
	cout << "------------------------------------------------------------" << endl;
	cout << endl;
	cout << "Total Payroll: $" << fixed << setprecision(2) << totalPay << endl;
	system("pause");
	return 0;
} // end main
