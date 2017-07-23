// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   11/11/2014
// Assignment:		Lecture Homework #7 Exercise #2
// Compiler:		Visual C++ 2013

// Description:
// This program reads a text file with random numbers and prints specified information about the number inside

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ifstream inputFile;         // used to extract numbers from an input file
   int nextNum,                // used to store the numbers read from an input file
       num,                    // tranfers nextNum to num
       largest = 0,            // stores largest num, initialize to 0 for test
       smallest = 8000,        // stores smallest num, initialize to large number for test
       secondLargest = 0,      // stores second to largest num, initialize to 0 for test
       secondSmallest = 9000,  // stores second to smallest num, set to 0 for test
       total = 0,              // accumulate the sum of all numbers
       count = 0;              // counter for loop



   // open the input file Random.txt
   inputFile.open("Random.txt");
   if (!inputFile.fail())
   {
      cout << "The file was opened successfully." << endl << endl << endl;
      while (inputFile >> nextNum)
      {
         count++;
         total += nextNum;
         if (nextNum < smallest)
         {
            smallest = nextNum;
         }
         else if (nextNum > largest)
         {
            largest = nextNum;
         }
      }

      // make average calculation
      int average = total / count;
      // print results
      cout << "The largest value is: " << largest << "." << endl
         << "The smallest value is: " << smallest << "." << endl
         << "The total number of numbers is: " << count << "." << endl
         << "The sum of the numbers is: " << total << "." << endl
         << "The average of the numbers is: " << average << "." << endl;

      inputFile.close();
   }
   else
   {
      cout << "Error! Unable to open the file." << endl;
   }
   return 0;
}