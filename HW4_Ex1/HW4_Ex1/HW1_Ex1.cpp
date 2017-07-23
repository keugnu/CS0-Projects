// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   10/08/2014
// Assignment:		Lecture Homework #4 Exercise #1
// Compiler:		Visual C++ 2010

// Description:
// This program takes input of the user of a number of second, determines what the
// highest order of time is applicable for the output, does the conversion for the
// output and prints the result.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // create variable for user input
   int seconds;
   // setprecision
   cout << setprecision(2) << fixed;

   // ask user to input value into seconds
   cout << "Please enter a number of seconds: ";
   cin >> seconds;
   // create conversions for all inputs
   double minutes = seconds / 60.0, hours = minutes / 60.0, days = hours / 24.0;
   // create if else if to determine what the higher order of time is used
   if (seconds <= 60)
   {
      cout << seconds << " second(s) is " << seconds << " second(s)." << endl;
   } // end if (second > 60)
   else if (seconds >= 86400)
      cout << seconds << " second(s) is " << days << " day(s)." << endl;
   else if (seconds >= 3600)
      cout << seconds << " second(s) is " << hours << " hour(s)." << endl;
   else if (seconds >= 60)
      cout << seconds << " second(s) is " << minutes << " minute(s)." << endl;

   return 0;
} // end function main()