// FallingDisks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <conio.h>
#include <iostream>
using namespace std;

#include "Solution.h"

int main()
{

  // Declare the vectors:
  vector<int> intVecA;
  vector<int> intVecB;

  // Populate:
  intVecA.push_back(5);
  intVecA.push_back(6);
  intVecA.push_back(4);
  intVecA.push_back(3);
  intVecA.push_back(6);
  intVecA.push_back(2);
  intVecA.push_back(3);

  intVecB.push_back(2);
  intVecB.push_back(3);
  intVecB.push_back(5);
  intVecB.push_back(2);
  intVecB.push_back(4);

  int result = solution(intVecA, intVecB);
  cout << "Result: " << result << endl;

  // End of program
  cout << "Press any key to exit.";
  _getch();

  return 0;
}

