// Lab 6 Exercise 2
// Calculate investment amount
//
// Program by: Stephen-Michael Brooks

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double investment,         // used to store user's investment capital
          APR;                // used to store user's annual interest rate
   int months;                // used to store user's length of investment in months
   
   cout << "Enter an initial investment amount." << endl << "The minimum investment is $10,000. ";
   cin >> investment;
   if (investment < 10000)
   {
      do // start error loop and ask for investment over 10000
      {
         cout << "Error, the minimum investment is $10,000." << endl << "Enter the inital investment: ";
         cin >> investment;
      } while (investment < 10000);
   } // end if (investment < 10000)
   
   // begin input of APR
   cout << "Enter the annual percentage rate of return: ";
   cin >> APR;

   if (APR < 0) // checking if APR is positive
   {
      do
      {
         cout << "Error, the APR should be positive." << endl << "Enter the annual percentage rate of return: ";
         cin >> APR;
      } while (APR < 0);
   } // end if (APR < 0)

   // begin input of months
   cout << "Enter the length of the investment in months: ";
   cin >> months;

   if (months < 0) // checking if months is positive
   {
      do
      {
         cout << "Error, the length of investment should be positive." << endl << "Enter the length of the investment in months: ";
         cin >> months;
      } while (months < 0);
   } // end if (months < 0)

   // create calculations
   double rate = (APR / 12.0) / 100.0,                                         // calculates monthly interest rate
          balance = investment * (pow(1.0 + (rate / 1), 1 * months));          // calculates interest earned compounded annually

   // print results of calculations
   cout << setprecision(2) << fixed << "After " << months << " months your investment of $" << investment << " will be worth $" << balance << "." << endl;

   return 0;
} // end fucntion main()