// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   12/11/2014
// Assignment:		Lecture Homework #9 Exercise #2
// Compiler:		Visual C++ 2013

// Description:
// This program uses a linear search algorithm to locate specific values in arrays

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int searchList(int[], int, int);

int main()
{
   ifstream LSStandard,
            LSTest;

   int standard[100],
       test[50],
       index;

   LSStandard.open("LSStandard.txt");
   LSTest.open("LSTest.txt");

   if (LSStandard.is_open() && LSTest.is_open())
   {
      for (int count = 0; count < 100; count++)
         LSStandard >> standard[count];
      for (int count = 0; count < 50; count++)
         LSTest >> test[count];


      LSStandard.close();  // close input file
      LSTest.close();      // close input file


      for (int count = 0; count < 50; count++)
      {
         if (test[count] < 0)
            // if a trash value is found, skip below statementa nd continue the loop
            continue;

         index = searchList(standard, 100, test[count]);
         if (index >= 0)
            // ensure the function returns a positive number and report
            cout << "Number " << setw(2) << count + 1 << " (" << setw(3) << test[count] << ")" << " was located in position " << index << "." << endl;
         else
            cout << "Number " << setw(2) << count + 1 << " (" << setw(3) << test[count] << ")" << " was not in the file." << endl;
      }

   }

   else
      cout << "Error opening the input files... ";
      


   cout << endl << endl;
   return 0;
} // end function main()
// *********************************************************
// searchList() is passed an array and compares each value *
// of the array to a literal and if it matches returns the *
// index of the matching number. Otherwise, it returns -1. *
// *********************************************************
int searchList(int standard[], int size, int num)
{
   for (int count = 0; count < size; count++)
   {
      if (num == standard[count])
         return count;
   }
   return -1;

} // end function searchList()