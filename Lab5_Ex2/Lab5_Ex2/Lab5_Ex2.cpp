// Lab 5 Exercise 1
// Convert to Roman numberals
//
// Program by: Stephen-Michael Brooks

#include <iostream>

using namespace std;

int main()
{
   int number;    // user input of number
  
   // ask user to input a number
   cout << "Enter a number between 1 and 5: ";
   cin >> number;

   switch (number)
   {
   case 1: // user entered 1 
      cout << "The Roman numeral equivalent is I." << endl;
      break;
   case 2: // user entered 2
      cout << "The Roman numeral equivalent is II." << endl;
      break;
   case 3: // user entered 3
      cout << "The Roman numeral equivalent is III." << endl;
      break;
   case 4: // user entered 4
      cout << "The Roman numeral equivalent is IV." << endl;
      break;
   case 5: // user eneterd 5
      cout << "The Roman numeral equivalent is V." << endl;
      break;
   default: // user did not enter a number between 1 and 5
      cout << "You did not enter a valid number." << endl;
   } // end switch (number)

   return 0;
} // end function main()