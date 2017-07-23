#include <iostream>
using namespace std;

int main(){

   int number, product = 1, count = 0;
   cout << "Enter an integer number to be included in the product"
      << endl << "or enter 0 to end the input: ";
   cin >> number;
   while (number != 0)
   {
      product = product * number;
      count++;
      cout << "Enter an integer number to be included in the product"
         << endl << "or enter 0 to end the input: ";
      cin >> number;
   }
   if (count > 0)
   {
      cout << endl << "The product is " << product << "." << endl;
   }
   return 0;
}