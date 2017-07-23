// Author:		   Stephen-Michael Brooks
// Course:		   CS1336.502
// Date:			   10/07/2014
// Assignment:	   Lecture Homework #3 Exercise #1
// Compiler:	   Visual C++ 2010

// Description:
// This program calculates the average rainfall for three months.The program asks
// the user to enter the name of each month, such as June or July, and the amount of 
// rain (in inches) that fell each month.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
   string month1, month2, month3; // variables for user to input the month of rainfall
   double month1rain, month2rain, month3rain; // variables for user to input the amount of ranfall for each month
   
   // initiate user inputs of rainfall data according to month
   cout << "Enter a month: ";
   cin >> month1;
   cout << "How much rainfall was measured (in inches) in the month of " << month1 << "? ";
   cin >> month1rain;
   cout << "Enter another month: ";
   cin >> month2;
   cout << "How much rainfall was measured (in inches) in " << month2 << "? ";
   cin >> month2rain;
   cout << "Enter a third month: ";
   cin >> month3;
   cout << "How much rainfall was measured (in inches) in " << month3 << "? ";
   cin >> month3rain;


   // calculate the average over the 3 months
   double avgRainfall = (month1rain + month2rain + month3rain) / 3;
   // print the average to the console
   cout << setprecision(2) << fixed;
   cout << "The average rainfall for the months " << month1 << ", " << month2 << ", and " << month3 << " is " << avgRainfall << endl;

   return 0;

} //end function main()