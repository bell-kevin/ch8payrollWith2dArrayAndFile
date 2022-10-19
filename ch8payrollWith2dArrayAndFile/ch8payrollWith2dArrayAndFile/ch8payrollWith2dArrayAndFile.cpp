// ch8payrollWith2dArrayAndFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    std::cout << "Chapter 8 Payroll with 2D Array & File by Kevin Bell\n\n";
	//Create a project that uses a 2D array to contain the hours worked each day of the week for employees. 
	//The file has 6 lines in it, one for each employee.
	//It begins with the pay rate for that employee, then has the hours worked for each day of the week.
	//For example:
	//10.00  8  7  7  8  6
	//This record shows the pay rate for this employee is $10.00, and the employee worked 8 hours on Monday, 7 hours on Tuesday, 7 hours on Wednesday, 8 hours on Thursday, 
	// and 6 hours on Friday.
	//You can read the first item from a line in this file, store it as the pay rate for this employee, then use a loop to read the next 5 items
	//You can read the data into a single 2D array, with pay rate in the 0th (zeroth) cell in each row, then hours in the other 5 cells, one row for each employee. 
	//Or you can use parallel arrays -- a regular array holding the pay rates, and a 2D array holding the hours worked for each day for each employee.
	//Read that data from the file "payroll.txt" into the 2D array.
	//After filling the array, display the hours worked by each employee.
	//Calculate the pay for each employee and the total payroll for all employees and display that data.

	//Declare variables
	const int NUM_EMPLOYEES = 6;
	const int NUM_DAYS = 5;
	double payRate[NUM_EMPLOYEES];	//Array to hold the pay rate for each employee
	double totalHours[NUM_EMPLOYEES];	//Array to hold the total hours worked for each employee
	double hours[NUM_EMPLOYEES][NUM_DAYS];	//2D array to hold the hours worked for each employee for each day
	double totalPay[NUM_EMPLOYEES];	//Array to hold the total pay for each employee
	double totalPayroll = 0;	//Variable to hold the total payroll for all employees
	double hourlyPayRate = 0;	//Variable to hold the hourly pay rate for each employee
	
	//Open the file
	ifstream inputFile;
	inputFile.open("payroll.txt");
		
	//Read the data from the file into the 2D array
	if (inputFile)
	{
		if (inputFile.is_open()) {
			cout << "File opened successfully.\n\n";
			for (int i = 0; i < NUM_EMPLOYEES; i++)
			{
				inputFile >> payRate[i];
				for (int j = 0; j < NUM_DAYS; j++)
				{
					inputFile >> hours[i][j];
				}
			}
		}
	}
	else
	{
		cout << "Error opening the file.\n";
	}

	
	//Close the file
	inputFile.close();
	
	//Display the hours worked by each employee
	std::cout << "Employee hours:\n";
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		std::cout << "Employee " << i + 1 << ": ";
		for (int j = 0; j < NUM_DAYS; j++)
		{
			std::cout << hours[i][j] << " ";
		} //end for loop
		std::cout << std::endl;
	} //end for loop
	cout << endl;
	cout << "Payroll" << endl;
	totalHours[0] = hours[0][0] + hours[0][1] + hours[0][2] + hours[0][3] + hours[0][4];
	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		totalPay[i] = 0;
		for (int j = 0; j < NUM_DAYS; j++)
		{
			totalPay[i] += hours[i][j] * hourlyPayRate;
		} //end for loop
		totalPayroll += totalPay[i];
		std::cout << "Employee " << i + 1 <<", rate = $"<< payRate[i] << ", hrs = " << totalHours[i] << ", pay = $" << totalPay[i] << endl;
	} //end for loop
	cout << endl;
	std::cout << "Total for payroll = $" << totalPayroll << endl;
	system("pause");
	return 0;
} // end main
