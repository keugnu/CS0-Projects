// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   11/18/2014
// Assignment:		Lecture Homework #8 Exercise #1
// Compiler:		Visual C++ 2013

// Description:
// This program prints a diamond shape with a height dictated by the user

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int height,             // used to set the height of the diamond
      asterisk,            // loop counter
      space,               // used for counting spaces
      heightcount,         // used for counting loop iteration
      innercount = 0;      // count the trailing asterisks
   string inner = "";      // to print trailing asterisks

   // ask user to input height of diamond
   cout << "Please enter an odd number between 1 and 29: ";
   cin >> height;
   height = height + 2;
   while (height % 2 == 0 || height > 29)
   {
      cout << "Error... Please enter an odd number between 1 and 29: ";
      cin >> height;
      height = height + 2;
   }

   // set counters
   heightcount = height / 2;
   asterisk = -(height / 2);

   // begin loop for upper half of diamond
   while (asterisk < 0)
   { 
      
      for (space = heightcount; space > 1; space--)
         cout << " ";

      cout << "*" << inner << endl;
      innercount += 2; // count +2 asterisks
      inner += "**";   // add 2 asterisks
      asterisk++;
      heightcount--;

   }

   // make adjustments to variables for lower half of diamond
   height = (height / 2) - 2;
   inner.erase(innercount/2);
   inner.erase(0, 1);
   // create string to insert leading spaces
   string spaces = " ";

   // start loop for lower half of diamond
   while (height >= 0)
   {
      cout << spaces << inner;

      for (heightcount = height; heightcount >= 1; heightcount--)
         cout << "*";

      cout << endl;
      inner.erase(0,1); // erase 1 aterisk
      spaces += " ";    // add 1 space
      height--;
   }

   cout << endl << endl;

   return 0;
} // end function main()