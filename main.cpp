//
//  main.cpp
//  PE8Chapter5
//
//  Created by Quentin Miller on 2/18/21.
//


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int firstNum, secondNum;
 int sumEven = 0;
 int sumSquareOdd = 0;

 char chCounter;

 int counter;

     //Part a
 cout << "Enter two numbers." << endl;
 cout << "First number must be less than "
      << "the second number you enter" << endl;
 cout << "Enter numbers: " << flush;
 cin >> firstNum >> secondNum;
 cout << endl;

     //Part b
 if (firstNum % 2 == 0)
     counter = firstNum + 1;
 else
     counter = firstNum;

 cout << "Odd integers between " << firstNum << " and "
      << secondNum << " are: " << endl;

 while (counter <= secondNum)
 {
     cout << counter << " ";
     counter = counter + 2;
 }

 cout << endl;

     //Part c
 if (firstNum % 2 == 0)
     counter = firstNum;
 else
     counter = firstNum + 1;

 while (counter <= secondNum)
 {
     sumEven = sumEven + counter;
     counter = counter + 2;
 }

 cout << "Sum of even integers between " << firstNum << " and "
      << secondNum << " = " << sumEven << endl;

     //Part d
 cout << "Number    Square of Number" << endl;
 counter = 1;
 while (counter <= 10)
 {
     cout << setw(4) << counter << setw(18)
          << counter * counter << endl;
     counter++;
 }

 cout << endl;
 
     //Part e
 if (firstNum % 2 == 0)
     counter = firstNum + 1;
 else
     counter = firstNum;

 while (counter <= secondNum)
 {
     sumSquareOdd = sumSquareOdd + counter * counter;
     counter = counter + 2;
 }

 cout << "Sum of the squares of odd integers between "
      << firstNum << " and " << secondNum << " = "
      << sumSquareOdd << endl;

     //Part f
 cout << "Upper case letters are: ";

 chCounter = 'A';
 while (chCounter <= 'Z')
 {
     cout << chCounter << " ";
     chCounter++;
 }
 cout << endl;

 return 0;
}
