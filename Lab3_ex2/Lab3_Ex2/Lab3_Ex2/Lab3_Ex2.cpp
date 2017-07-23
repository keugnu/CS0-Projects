// Lab 3 Exercise 2
// Calculate MPH (Miles Per Hour)
//
// Program by: Stephen-Michael Brooks

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // declare variables for user input
   double startMiles, endMiles;
   double hoursTraveled;

   // ask for user to input data into variables
   cout << "Enter odometer reading before the trip: ";
   cin >> startMiles;
   cout << "Enter odometer reading after the trip: ";
   cin >> endMiles;
   cout << "Enter number of hours traveled: ";
   cin >> hoursTraveled;

   // line breaks
   cout << endl << endl;

   // create equations based on user input
   double totalMiles = endMiles - startMiles;
   double MPH = totalMiles / hoursTraveled;

   // display the results of the equation
   cout << setprecision(1) << fixed;
   cout << setw(11) << "Total Miles" << setw(9) << totalMiles << endl;
   cout << setw(11) << "Miles/Hour" << setw(9) << MPH << endl;

   return 0;



} // end function main()