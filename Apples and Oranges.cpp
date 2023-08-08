#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{

  for (int i = 0; i < apples.size(); i++)
  {
    apples[i] += a;
  }

  for (int i = 0; i < oranges.size(); i++)
  {
    oranges[i] += b;
  }

  int NoOfApples = 0, NoOfOranges = 0;

  for (int i = 0; i < apples.size(); i++)
  {
    if (apples[i] <= t && apples[i] >= s)
    {
      NoOfApples++;
    }
  }

  for (int i = 0; i < oranges.size(); i++)
  {
    if (oranges[i] <= t && oranges[i] >= s)
    {
      NoOfOranges++;
    }
  }

  cout << NoOfApples << endl;
  cout << NoOfOranges;
}