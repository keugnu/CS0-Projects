// Lab 9 Exercise 3
// Currency conversions 
//
// Program by:     Stepehn-Michael Brooks 
#include <iostream>
#include <iomanip>

using namespace std;

// This program will get an amount in US dollars and convert it 
// to another currency

// Prototypes of the functions
// Prototypes of the functions
float convertToYen(float dollars);
void convertToEurosAndPesos(float dollars, float &euros, float &pesos);

int main ()
{  
   float dollars, euros, pesos, yen;
   cout << fixed << showpoint << setprecision(2);
   cout << "Please input the amount of US Dollars " 
        << "you want converted: ";
   cin >> dollars;

   //  Fill in the code to convert to yen, euros, and pesos
   // and display the results
   euros = dollars;
   pesos = dollars;
   yen = convertToYen(dollars);
   
   convertToEurosAndPesos(dollars, euros, pesos);
   cout << "The value of " << dollars << " Dollars is:" << endl
      << yen << " Yen." << endl
      << euros << " Euros." << endl
      << pesos << " Pesos." << endl;

   return 0;
}

float convertToYen(float dollars)
{
   float Yen = dollars*104.75;
   return Yen;
}

void convertToEurosAndPesos(float dollars, float &euros, float &pesos)
{
   euros = dollars*0.77;
   pesos = dollars*13.07;
}