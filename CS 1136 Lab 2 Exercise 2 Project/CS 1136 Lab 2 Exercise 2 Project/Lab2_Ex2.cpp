// CS 1136 Lab 2 Exercise 2
// Program by: Stephen-Michael Brooks

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   //assign variables and values for mobo
   float mobocost = 32.75, margin = 0.45, moboprofit = mobocost*margin, sellPrice = moboprofit + mobocost;
   
   // printing the mobo info
   cout << setprecision(2) << fixed;
   cout << "The profit margin of a motherboard is: $" << moboprofit << endl;
   cout << "The sell price of the motherboard is: $" << sellPrice << endl << endl;

   return 0;

} // end function main()