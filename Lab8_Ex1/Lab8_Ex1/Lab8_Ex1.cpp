// Lab 8 Exercise 1
// The compute_sum function 
//
// Program by: Stephen-Michael Brooks

#include <iostream>
using namespace std;

// Compute the sum of all of the numbers from 1 to n where n
// is a natural number
// use the formula:  n(n+1)/2
int compute_sum(int limit)  // compute_sum function
{
   int sum_to_limit;

   sum_to_limit = limit * (limit + 1) / 2;
   return sum_to_limit;
} // end function compute_sum()

int main()
{
   int sum = 0;
   int maxNumber;

   // get the maxNumber for the function call
   cout << "Enter a whole number greater than 0" << endl;
   cin >> maxNumber;

   // call compute sum
   sum += compute_sum(maxNumber);    // Call to compute_sum function
   // display the sum calculated by the compute_sum function
   cout << "The sum of 1 to " << maxNumber;
   cout << " is " << sum << endl;

   return 0;
} // end function main()

