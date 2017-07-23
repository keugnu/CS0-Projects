// Author:        Stephen-Michael Brooks
// Class:         CS 1336.502
// Date:          25 September 2014
// Assignment:    Homework #2 Program #2
// Compiler:      Visual Studio 2014 C++

// Description: This program will use a user-defined temperature in degrees Celsius, Fahrenheit, and Kelvin
// and converts the temperatures to both the equivalents and prints the results to the console.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // setprecision
   cout << setprecision(2) << fixed;
   // create variables for user input
   double degCelsius, degFahrenheit, Kelvin;
   // Ask for user to define degCelsius
   cout << "Please enter a temperature in degrees Celsius...   ";
   cin >> degCelsius;
   // create temperate conversion calculations for Celsius
   double celsiusToFahrenheit = (9.0 / 5.0) * degCelsius + 32.0, celsiusToKelvin = degCelsius + 273.16;
   // print the results for Celsius conversions
   cout << "This temperature in Fahrenheit is " << celsiusToFahrenheit << " degrees." << endl;
   cout << "This temperature in Kelvin is " << celsiusToKelvin << "." << endl << endl;

   // Ask for user to define degFahrenheit
   cout << "Please enter a temperature in degrees Fahrenheit... ";
   cin >> degFahrenheit;
   // create temperature conversion calculations for Fahrenheit
   double fahrenheitToCelsius = (degFahrenheit - 32.0) * (5.0 / 9.0);
   double fahrenheitToKelvin = fahrenheitToCelsius + 273.16;
   // print the results for Fahrenheit conversions
   cout << "This temperature in Celsius is " << fahrenheitToCelsius << " degrees." << endl;
   cout << "This temperature in Kelvin is " << fahrenheitToKelvin << "." << endl << endl;

   // Ask for user to define temperature in Kelvin
   cout << "Please enter a temperature in Kelvin... ";
   cin >> Kelvin;
   // Create conversion calculations for Kelvin
   double kelvinToCelsius = Kelvin - 273.16;
   double kelvinToFahrenheit = (9.0 / 5.0) * kelvinToCelsius + 32;
   // print the resuts of the conversions
   cout << "This temperature in Fahrenheit is " << kelvinToFahrenheit << " degrees." << endl;
   cout << "This temperature in Celsius is " << kelvinToCelsius << " degrees." << endl << endl;

   return 0;

} // end funtion main