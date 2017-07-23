// Author:     Stephen-Michael Brooks
// Course:     CS1336.502
// Date:       9/10/2014
// Assignment: Lecture Homework #1 Exercise #1
// Comiler:    Visual C++ 2014

//Description:
// This program uses the standard distance formula to calculate
// distance traveled for a set of pre-defined variables.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // setting variables
   float time, acceleration;
   double distance;
   // setting values
   time = 5.0;
   acceleration = 32.0;
   distance = 1.0/2*acceleration*time*time;

   // setting decimal places
   cout << fixed << setprecision(1);
   // printing results
   cout << "The time was:\t\t\t" << time << " sec." << endl;
   cout << "The acceleration was:\t\t" << acceleration << " feet/sec/sec" << endl;
   cout << "The distance traveled was:\t" << distance << " feet" << endl;

   return 0;

} // end function main()