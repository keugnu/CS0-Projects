// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   12/02/2014
// Assignment:		Lecture Homework #8 Exercise #2
// Compiler:		Visual C++ 2013

// Description:
// This program converts all words from an inout file to pig-latin and prints to console and output file

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

string convertToPigLatin(string inStr);

int main()
{
   ifstream inputFile;
   ofstream outputFile;
   string engString;
   string pigLatinStr;

   inputFile.open("PigLatinIn.txt");      // open input file
   outputFile.open("PigLatinOut.txt");    // open output file


   if (!inputFile.fail())   // input file opens successfully
   {
      cout << setw(15) << "English Word";
      cout << setw(20) << "Pig-Latin Word" << endl;
      cout << setw(15) << "------------";
      cout << setw(20) << "--------------" << endl;
      outputFile << setw(15) << "English Word";
      outputFile << setw(20) << "Pig-Latin Word" << endl;
      outputFile << setw(15) << "------------";
      outputFile << setw(20) << "--------------" << endl;


      while (inputFile >> engString)
      {
         pigLatinStr = convertToPigLatin(engString);
         cout << setw(13) << engString;
         cout << setw(20) << pigLatinStr << endl;
         outputFile << setw(13) << engString;
         outputFile << setw(21) << pigLatinStr << endl;
      }
      inputFile.close();    // close input file
      outputFile.close();   // close output file

   }
   else   // input file did not open successfully
      cout << "Error opening the input file." << endl;

   cout << endl;



   return 0;
} // end function main()


string convertToPigLatin(string inStr)
{
   string pigStr,            // store final pig-latin word
          residualStr,       // stores substring from fisrt vowel to end of original word
          consonantStr,      // store substring prior to first vowel
          ay = "ay",         // "ay" for end of pig-latin word
          way = "-way";      // "way" for end of english word starting with a vowel

   unsigned int VowelIndex[5];
                // set array values 0-4
                VowelIndex[0] = inStr.find('a'),    // find index of "a"
                VowelIndex[1] = inStr.find('e'),    // find index of "e"
                VowelIndex[2] = inStr.find('i'),    // find index of "i"
                VowelIndex[3] = inStr.find('o'),    // find index of "o"
                VowelIndex[4] = inStr.find('u');    // find index of "u"

   // test for minimum value in array
   int smallestVowelIndex = 99;  // variable set to arbitrarily high number for initial test to capture first small number
   for (int count = 0; count < 5; count++)
      if (VowelIndex[count] < smallestVowelIndex)
         smallestVowelIndex = VowelIndex[count];

   if (smallestVowelIndex > 0) // if the english word has a vowel somewhere after the first letter
   {
      residualStr = inStr.substr(smallestVowelIndex, 99),
      consonantStr = inStr.substr(0, smallestVowelIndex),
      pigStr = residualStr + "-" + consonantStr + ay;
   }
   else // if english word begins with vowel
      pigStr = inStr + way;

   return pigStr;
} // end function convertToPigLain(string inStr)

/******************************************************************************************************
This function reads a word extracted from an input file and does all necessary string manipulation to *
convert that word to pig-latin.                                                                       *
*******************************************************************************************************/
