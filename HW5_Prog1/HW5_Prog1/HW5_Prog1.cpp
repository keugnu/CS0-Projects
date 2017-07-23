// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   11/01/2014
// Assignment:		Lecture Homework #5 Exercise #1
// Compiler:		Visual C++ 2010

// Description:
// This program 1) prints out the even intergers between 2 and 100, 2) prints out the integers that are multiples of 3 from 99 down to 3,
// 3) prints out the integers between 2 and 1,048,576 that are integer powers of 2, 4) prints out the integers between 1,048,576 down to 2 that
// are integer powers are 2, and 5) ....

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   // create a loop that prints even intergers between 2 and 100 then stop
   int count = 0,          // counter for each loop
       num;                // accumulator
   for (num = 0; num <= 98; count++)
   {
      num += 2;
      // new line every 10 integers printed
      if (count % 10 == 0)
         cout << endl;
      // print num
      cout << setw(5) << num;
   }

   cout << endl
        << endl
        // print how many times the last loop ran
        << "Number of numbers: " << count << endl << endl;

   // create a loop that prints integers that are multiples of 3 from 99 down to 3
   count = 0;              // reinitialize count for next loop
   for (num = 99; num >= 4; count++)
   {
      num -= 3;
      // new line every 10 integers printed
      if (count % 10 == 0)
         cout << endl;
      cout << setw(5) << num;
   }
   cout << endl 
        << endl
        // print how many times the last loop ran
        << "Number of numbers: " << count << endl << endl;

   // create a loop that prints out the intergers between 1,048,576 that are interger powers of 2
   count = 0;              // reinitialize count for next loop
   for (num = 1; num <= 1048575; count++)
   {
      num *= 2;
      // new line every 7 integers printed
      if (count % 7 == 0)
         cout << endl;
      cout << setw(9) << num;
   }
   cout << endl
      << endl
      // print how many times the last loop ran
      << "Number of numbers: " << count << endl << endl;

   // create a loop that prints out the intergers between 1,048,576 down to 2 that are interger powers of 2
   count = 0;              // reinitialize count for next loop
   for (num = 2097152; num >= 3; count++)
   {
      num /= 2;
      // new line every 7 integers printed
      if (count % 7 == 0)
         cout << endl;
      cout << setw(9) << num;
   }
   cout << endl
      << endl
      // print how many times the last loop ran
      << "Number of numbers: " << count << endl << endl;

   // loop to calculate factorial of an integer
   count = 1;           // repurpose count for factorial loop as accumulator
   cout << "Enter a number: ";
   cin >> num;
   for (int fact = num; fact >= 1; fact--)
      count *= fact;

   cout << endl
        << num << "! = " << count
        << endl
        << endl;


   return 0;
} // end main()