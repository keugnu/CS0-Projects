// Author:		   Stephen-Michael Brooks
// Course:		   CS1336.502
// Date:			   11/07/2014
// Assignment:	   Lecture Homework #3 Exercise #1
// Compiler:	   Visual C++ 2010

// Description:
// This program calculates the average rainfall for three months.The program asks
// the user to enter the name of each month, such as June or July, and the amount of 
// rain (in inches) that fell each month.#include <iostream>#include <iomanip>#include <string>using namespace std;int main(){	string month1, month2, month3; // variables for user to input the month of rainfall	double month1rain, month2rain, month3rain; // variables for user to input the amount of ranfall for each month	// ask user to input rainfall for 3 separate months	cout << "Please type 3 months and their cooresponding rainfall values in inches. ";	cin >> month1 >> month1rain >> month2 >> month2rain >> month3 >> month3rain;	// calculate the average over the 3 months	double avgRainfall = month1rain*month2rain*month3rain;	// print the average to the console	cout << setprecision(2) << fixed;	cout << "The average rainfall for the months: " << month1 << ", " << month2 << ", and " << month3 << " is " << avgRainfall;	return 0;} //end function main()