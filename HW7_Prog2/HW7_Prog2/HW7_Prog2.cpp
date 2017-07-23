// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   11/18/2014
// Assignment:		Lecture Homework #7 Exercise #2
// Compiler:		Visual C++ 2013

// Description:
// This program takes a number from the user and prints the all the prime numbers up to that number

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

bool isPrime(int num)
{
   int divisor = num - 1;
   
   for (; divisor > 1; divisor--)
   {
      if (num % divisor == 0)    // return false as soon as num can be evenly divided
         return false;
   }

   return true;
} // end function isPrime(int num)
//**************************************
// isPrime checks if a number is prime *
//**************************************

int main()
{
   int numPrimes = 0;      // user input of how many primes print
   ofstream outFile;

   // ask user to enter number
   while (numPrimes < 1 || numPrimes > 100)
   {
      cout << "Please enter a number between 1 and 100: ";
      cin >> numPrimes;
   } // end input validation for primes

   cout << endl << endl;
   int primes = 2,
       timesprinted = 0;                  // counts number of times a prime is printed

   outFile.open("Primes.txt");            // opening file for output
   for (; timesprinted < numPrimes; primes++)
   {
      if (isPrime(primes) == true)
      {
         timesprinted++;                  // counts number of times a prime is printed
         cout << setw(5) << primes;
         outFile << setw(5) << primes;
         if (timesprinted % 10 == 0)
         {
            cout << endl;
            outFile << endl;              // write to output file
         }
      }
   }
   cout << endl << endl;
   outFile.close();                       // close output file

   return 0;
}