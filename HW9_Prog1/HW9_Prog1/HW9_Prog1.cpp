// Author:			Stephen-Michael Brooks
// Course:			CS1336.502
// Date:			   12/11/2014
// Assignment:		Lecture Homework #9 Exercise #1
// Compiler:		Visual C++ 2013

// Description:
// This program grades a multiple choice exam and prints information 
// regarding the questions that were answered incorrectly as well as 
// the lowest and highest scores in the class

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// function prototypes
void questionWrong(const char[], const char[], int, int);
int numberWrong(const char [], const char [], int, int);
void pass_fail(double, int);
void min_max_score(const double[], int[], int);


int main()
{
   ifstream keyfile,       // answer key input file
            students;      // student answers input file
   ofstream examReport;    // output file

   const int MAX_STUDENTS = 11,     // max students per classroom
             QUESTIONS = 20;        // number of questions on test

   int passing = 70,                   // passing percentage
       min_max[4] = { 0 };             // holds min and max scores
   double studentWrong[MAX_STUDENTS];  // tracks number of questions wrong according to student ID (1-MAX_STUDENTS)

   char key[QUESTIONS],                            // answer key
        studentAnswers[QUESTIONS * MAX_STUDENTS];  // student answers


   keyfile.open("CorrectAnswers.txt");
   students.open("StudentAnswers.txt");
   examReport.open("ExamAnalysis.txt");

   if (keyfile.is_open() && students.is_open())
   // if both input files open successfully execute the below statements
   {
      for (int count = 0; count < 20; count++)
         keyfile >> key[count];
      for (int count = 0; count < 220; count++)
         students >> studentAnswers[count];

      keyfile.close();  // closing input file
      students.close(); // closing input file
      
      int studentID = 1;
      // loop through key and student's answers comparing to count if answer is correct
      for (int iterations = 0, studentnumber = 0; studentID <= MAX_STUDENTS; studentnumber++)
      {
         studentWrong[studentnumber] = numberWrong(key, studentAnswers, (QUESTIONS - 1), ((QUESTIONS * studentID) - 1));
         studentID++;
      }

      // reset student ID and begin the report
      studentID = 1;
      for (int studentIndex = 0; studentID <= MAX_STUDENTS; studentID++)
      {
         cout << "Report for Student " << studentID << ":" << endl
              << "---------------------" << endl
              << "Missed " << studentWrong[studentID - 1] << " out of " << QUESTIONS << " for " << (100 * ((20 - studentWrong[studentID - 1]) / QUESTIONS)) << "% correct." << endl
              << "Qustions missed: " << endl
              << "   "; questionWrong(key, studentAnswers, QUESTIONS - 1, ((QUESTIONS * studentID)-1));
         cout << endl; pass_fail(studentWrong[studentID - 1], QUESTIONS); 
         cout << endl << endl << endl << endl;
         studentIndex += 20;
      }
      min_max_score(studentWrong, min_max, MAX_STUDENTS);
      cout << "Student " << min_max[0] << " had the lowest score with " << (100 * (QUESTIONS - min_max[1])) / QUESTIONS << "%." << endl;
      cout << "Student " << min_max[2] << " had the highest score with " << (100 * (QUESTIONS - min_max[3])) / QUESTIONS << "%." << endl;

   }
   else
      // print error if input files will not open
      cout << "Error opening the input files...";
   examReport.close();



   cout << endl << endl;
   return 0;
} // end function main()
// ****************************************************************************
// questionWrong() will find when an answer doesn't match the key and returns *
// prints a condensed report on what question number was missed and what      *
// answer was submitted vesus what the correct answer is.                     *
// ****************************************************************************
void questionWrong(const char key[], const char student[], int questionnumber, int studentanswer)
{
   while (questionnumber >= 0)
   {
      if (key[questionnumber] != student[studentanswer])
         cout << questionnumber+1 << "(" << student[studentanswer] << "/" << key[questionnumber] << ")  ";
      questionnumber--;
      studentanswer--;
   }
} // end function questionWrong()
// ****************************************************************************
// numberWrong() compares the key and the student's answers and counts how    *
// many mismatches there are between the two.                                 *
// ****************************************************************************
int numberWrong(const char key[], const char student[], int keysize, int studentsize)
{
   int wrong = 0;
   while (keysize >= 0)
   {
      if (key[keysize] != student[studentsize])
         // increment wrong if mismatch
         wrong++;
      keysize--;
      studentsize--;
   }

   return wrong;
} // end function numberWrong()
// ***************************************************************************
// pass_fail() prints out a statment that depends on whether the student has *
// scored a passing or failing grade on the exam.                            *
// ***************************************************************************
void pass_fail(double numberWrong, int QUESTIONS)
{
   if ( (100 * ((QUESTIONS - numberWrong) / QUESTIONS)) >= 70)
      cout << "This student passed the exam!";
   else
      cout << "This student failed the exam.";
} // end function pass_fail()
// ***************************************************************************
// min_max_score() builds a small array buy comparing number of questions    *
// were answered wrong.                                                      *
// element 0: student with the lowest grade                                  *
// element 1: number of incorrect questions for lowest grade                 *
// element 2: student with the highest grade                                 *
// element 3: number of incorrect questions for highest grade                *
// ***************************************************************************
void min_max_score(const double numberWrong[], int min_max[], int students)
{
   min_max[1] = numberWrong[0];     // initialize min score to first score for test
   min_max[3] = numberWrong[0];     // initialize max score to first score for test
   for (int count = 0; count < students; count++)
   {
      // if number incorrect is lower than max score, replace max score
      if (numberWrong[count] < min_max[3])
      {
         min_max[3] = numberWrong[count];
         min_max[2] = count+1;
      }
      // if number incorrect is higher than min score, replace min score
      else if (numberWrong[count] > min_max[1])
      {
         min_max[1] = numberWrong[count];
         min_max[0] = count+1;
      }
   }
}
