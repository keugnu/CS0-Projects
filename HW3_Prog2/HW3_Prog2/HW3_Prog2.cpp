// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   10/07/2014
// Assignment:		Lecture Homework #3 Exercise #2
// Compiler:		Visual C++ 2010

// Description:
// This program calculates the monthly payment for any loan amount and APR and prints
// the information in a table aliong with other useful information regarding the loan

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
   double totalLoan, numberPayments, APR; // variables for user input

   // ask user for loan information

   cout << "Please enter your total loan amount, the legnth of the loan in months, and the APR... " << endl;
   cout << "Total loan amount: ";
   cin >> totalLoan;
   cout << "Number of months financed: ";
   cin >> numberPayments;
   cout << "The Annual Interest Rate: ";
   cin >> APR;
   cout << endl << endl << endl;

   // set variables for calculations
   double monthlyPaymnet, rate = (APR / 12)/100;

   // create table
   cout << setw(30) << left << "Loan amount:" << "$" << right << setprecision(2) << fixed << setw(10) << totalLoan << endl;
   cout << setw(30) << left << "Monthly Interest Rate:" << right << setw(10) << (APR/12) << "%" << endl;
   cout << setw(30) << left << "Number of Payments:" << right << setw(11) << static_cast <int> (numberPayments) << endl;

   // calculate the monthly payment
   double monthlyPayment = (rate * pow(1.0 + rate, numberPayments) / (pow(1.0 + rate, numberPayments) - 1.0)) * totalLoan;
   // calculate total paid and interest paid
   double totalPaid = monthlyPayment * numberPayments;

   // continue table
   cout << setw(30) << left << "Monthly Payment:" << "$" << right << setprecision(2) << fixed << setw(10) << monthlyPayment << endl;
   cout << setw(30) << left << "Amount paid back:" << "$" << right << setw(10) << totalPaid << endl;

   // calculate interest paid
   double interestPaid = totalPaid - totalLoan;
   // continue table
   cout << setw(30) << left << "Interest paid:" << "$" << right << setw(10) << interestPaid << endl;

   system("pause");
   return 0;
} //end function main()