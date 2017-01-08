// Given a table A of N integers from 0 to N-1 calculate the smallest such index P,
// that that {A[0],...,A[N-1]} = {A[0],...,A[P]}.
// i.e. returns the shortest prefix P for which {A[0],...,A[P]} contains all numbers in A

#include "stdafx.h"

#include "Solution.h"

bool Contains(vector<int> &vect, int num)
{
  size_t vectSize = vect.size();
  bool contains = false;
  bool continueSearch = true;
  int iVect = 0;
  while (continueSearch && (iVect < vectSize))
  {
    if (vect.at(iVect) == num)
    {
      contains = true;
      continueSearch = false;
    }
    else
    {
      iVect++;
    }
  }
  return contains;
}

int solution(vector<int> &A) {
  // write your code in C++14 (g++ 6.2.0)

  int p = 0;
  vector<int> inA;
  size_t sizeA = A.size();
  for (int iA = 0; iA < sizeA; iA++)
  {
    int number = A.at(iA);
    bool newNumber = !Contains(inA, number);
    if (newNumber)
    {
      p = iA;
      inA.push_back(number);
    }
  }

  return p;

}
