#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b)
{
  int totalCost = 0;
  for (int i = 0; i < bill.size(); i++)
  {
    if (i == k)
    {
      continue;
    }
    totalCost += bill[i];
  }

  if (totalCost / 2 == b)
  {
    cout << "Bon Appetit";
    return;
  }

  else
  {
    cout << b - totalCost / 2;
    return;
  }
}