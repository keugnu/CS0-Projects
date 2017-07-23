// Lab 6 Exercise 1
// Calculate the product
//
// Program by: Stephen-Michael Brooks

#include <iostream>

using namespace std;

int main()
{
   int number,          // used to store the user's input
       product = 1,     // used to mulitply the user's input - cannot be zero
       count = 0;       // starts the count of the loop

   // ask user to enter an integer for multiplication
   cout << "Enter an integer number to be included in the product" << endl << "or enter 0 to end the input: ";
   // user enters integer
   cin >> number;

   if (number > 0 || number < 0) // this tests the value of number and executes the below statements if number is not 0
   {
      do
      {
         // multiply the user's input starting with product = 1 and then stores the product of the calculation in the var product
         product = product*number; 
         // print the product
         cout << endl << "The product is " << product << "." << endl << endl;
         // increase count by 1
         count++;
         // ask for another entry in case the user wants more calculations or end the program by entering 0
         cout << "Enter an integer number to be included in the product" << endl << "or enter 0 to end the input: ";
         cin >> number;

      } while (number != 0); // test if not 0 and loop
   } // end if (number > 0)
   cout << endl;

   return 0;
} // end function main
