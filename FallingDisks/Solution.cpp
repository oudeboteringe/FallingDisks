// Given a table A of N integers from 0 to N-1 calculate the smallest such index P,
// that that {A[0],...,A[N-1]} = {A[0],...,A[P]}.
// i.e. returns the shortest prefix P for which {A[0],...,A[P]} contains all numbers in A

#include "stdafx.h"

#include <algorithm>
using namespace std;

#include "Solution.h"

int DiskFits(vector<int> &A, int bot, int diam) {

  int newBot = bot;
  bool falls = true;
  int depth = 0;
  while (falls) {
    if ((diam <= A.at(depth)) && (depth < bot)) {
      depth++;
    }
    else {
      falls = false;
    }
  }
  newBot = std::min(bot, (depth-1));
  return newBot;
}


int solution(vector<int> &A, vector<int> &B) {
  // write your code in C++14 (g++ 6.2.0)

  int nDisks = 0;
  int iDisk = 0;
  size_t newBottom = A.size()-1;
  while (newBottom > 0)
  {
    newBottom = DiskFits(A, int(newBottom), B.at(iDisk));
    if (newBottom >= 0)
    {
      nDisks++;
      iDisk++;
    }
  }

  return nDisks;
}
