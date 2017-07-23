// Author:     Stephen-Michael Brooks
// Class:      CS 1336.502
// Date:       25 September 2014
// Assignment: Homework #1 Program #1
// Compiler:   VS 2014 C++

// Description: This program calculates the fuel needed for a trip
// where the distance is dictated by the user, but the fuel economy
// is fixed my the program.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // declare fuel economy literals
   double cityEco = 23.5, hwyEco = 28.9;
   // declare distance traveled variables
   double cityMiles, hwyMiles;
   // ask user to input distances
   cout << "How many miles are you traveling in the city?    ";
   cin >> cityMiles;
   cout << "How many miles are you traveling on the highway?    ";
   cin >> hwyMiles;
   // declare varaibles and calculations for fuel economy
   double hwyGallons = hwyMiles / hwyEco, cityGallons = cityMiles / cityEco;
   // calculate the fuel economy
   double totalGallons = hwyGallons + cityGallons;
   // print the total fuel needed for the trip
   cout << setprecision(1) << fixed;
   cout << "The distance traveled requires " << totalGallons << " gallons of fuel." << endl;

   return 0;

}; // end function main