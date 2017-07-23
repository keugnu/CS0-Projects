// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   12/02/2014
// Assignment:		Lecture Homework #8 Exercise #1
// Compiler:		Visual C++ 2013

// Description:
// This program prints string information from a defined C++ string.

#include <iostream>
#include <string>

using namespace std;


int main()
{
   string fun = "C++ Programming is fun!";   // declaring string for demonstration string functions
   int index_g_plus1 = fun.find('g') + 1;    // used to start second find function after first 'g'

   cout << "The length of the string is: " << fun.length() << endl;
   cout << "The letter at index 5 is: '" << fun.at(5) << "'" << endl;
   cout << "The ASCII value of the ltter at index 5 is: " << static_cast <int> (fun.at(5)) << endl;
   cout << "The substring from index 19 to 22 is: " << fun.substr(19, 22) << endl;
   cout << "The index of the first 'g' is: " << fun.find('g') << endl;
   cout << "The index of the second 'g' is: " << fun.find('g', index_g_plus1) << endl;
   cout << endl;
   return 0;
} // end function main()