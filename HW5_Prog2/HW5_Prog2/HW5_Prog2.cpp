// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   11/02/2014
// Assignment:		Lecture Homework #5 Exercise #2
// Compiler:		Visual C++ 2010

// Description:
// This program asks a user for 5 days worth of sales numbers and show a
// graphical comparisson of the sales numbers for those days

#include <iostream>

using namespace std;

int main()
{
   // daclare variables for each day
   int day1, day2, day3, day4, day5;

   // ask user to input sales for days 1-5
   cout << "Please enter sales for day 1: ";
   cin >> day1;
   cout << "Please enter sales for day 2: ";
   cin >> day2;
   cout << "Please enter sales for day 3: ";
   cin >> day3;
   cout << "Please enter sales for day 4: ";
   cin >> day4;
   cout << "Please enter sales for day 5: ";
   cin >> day5;
   cout << endl << endl;
   // begin bar graph
   cout << "SALES BAR CHART"
        << endl
        << "(Ea. * = $100)";
   cout << endl << "Sales for day 1: ";
   if (day1 >= 100) // if day 1 sales are at least 100, start loop
   {
      do
      {
         // print an asterisk for each 100 dollars in sales
         day1 -= 100;
         cout << "*";
      } while (day1 >= 99);
   }
   cout << endl
        << "Sales for day 2: ";
   if (day2 >= 100) // if day 2 sales are at least 100, start loop
   {
      do
      {
         // print an asterisk for each 100 dollars in sales
         day2 -= 100;
         cout << "*";
      } while (day2 >= 99);
   }
   cout << endl
        << "Sales for day 3: ";
   if (day3 >= 100) // if day 3 sales are at least 100, start loop
   {
      do
      {
         // print an asterisk for each 100 dollars in sales
         day3 -= 100;
         cout << "*";
      } while (day3 >= 99);
   }
   cout << endl
        << "Sales for day 4: ";
   if (day4 >= 100) // if day 4 sales are at least 100, start loop
   {
      do
      {
         // print an asterisk for each 100 dollars in sales
         day4 -= 100;
         cout << "*";
      } while (day4 >= 99);
   }
   cout << endl
        << "Sales for day 5: ";
   if (day5 >= 100) // if day 5 sales are at least 100, start loop
   {
      do
      {
         // print an asterisk for each 100 dollars in sales
         day5 -= 100;
         cout << "*";
      } while (day5 >= 99);
   }
   cout << endl << endl;

      return 0;
} // end function main