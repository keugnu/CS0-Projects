// Lab 7 Exercise 2
// Percentages of numbers input from a file. 
//
// Program by: Stephen-Michael Brooks


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   ifstream inputFile;                               // used to read ints from file
   const string INPUT_FILE_PATH = "numbers.txt";     // location of input file
   double num;               // used to store and test ints from file
   double negative = 0,      // used to store negative numbers
          positive = 0,      // used to store positive numbers
          zero = 0;          // used to store zeros


   inputFile.open(INPUT_FILE_PATH);
   if (!inputFile.fail()) // if file opens successfully, run below statements
   {
      cout << "Input file is open.\n";

      while (inputFile >> num) // read each int from the files and assign it to num
      {

         if (num > 0) // if num is positive, increment positive
            positive++;
         else if (num < 0) // if num if negative, increment negative
            negative++;
         else if (num == 0) // if num is a 0, increment zero
            zero++;
      }
      inputFile.close();

      // declare variables for calculations
      int sum = zero + positive + negative;
      double percentPos = (positive / sum) * 100,
             percentNeg = (negative / sum) * 100,
             percentZero = (zero / sum) * 100;

      // print the results!
      cout << setprecision(2) << fixed
         << "The percentage of positive numbers is: " << percentPos << "%" << endl
         << "The percentage of negative numbers is: " << percentNeg << "%" << endl
         << "The percentage of zeros is: " << percentZero << "%" << endl << endl << endl;

   } // end if inputfile was opened
   else
      cout << "Error! Unable to open input file." << endl;


      return 0;
} // end function main()
