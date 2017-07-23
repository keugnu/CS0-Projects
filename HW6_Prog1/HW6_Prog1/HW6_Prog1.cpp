// Author:			   Stephen-Michael Brooks
// Course:			   CS1336.502
// Date:			      11/11/2014
// Assignment:			Lecture Homework #6 Exercise #1
// Compiler:			Visual C++ 2013

// Description:
// This program prints a triangle made of asterisks.The size of the triangle is dictated by the user.

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int height,       // size of the height of the triangle
      length,        // length of triangle
      heightloop;    // used to transfer user input to 

   
   // ask user to choose the size of the triangle between 1 and 15
   cout << "Please enter a number between 1 and 15: ";
   cin >> height;

   heightloop = height;
   // begin first loop
   while (heightloop >= 1)
   {
      for (length = heightloop; length > 1; length--) // reinitialize the loop counter for every full run
         cout << "*";

      cout << "*" << endl;
      heightloop--;
   }

   cout << endl << endl;

   // initialize heightloop for outer counter
   heightloop = height;

// initialize string to accumulate spaces
string spaces = "";

// begin second loop
while (heightloop >= 1)
   {
   cout << spaces; // first print the accumulated spaces

   for (length = heightloop; length >= 1; length--) // reinitilize the loop counter every full run
      cout << "*";

   cout << endl; // end line for next row
   spaces += " "; // add a space into spaces
   heightloop--;
   }


   cout << endl << endl;
 

   return 0;
}