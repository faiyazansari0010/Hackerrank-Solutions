// In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

// Function Description

// Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

// aVeryBigSum has the following parameter(s):

// int ar[n]: an array of integers .
// Return

// long: the sum of all array elements

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    long long ans = 0;
    for(int i=0;i<ar.size();i++){
        ans += ar[i];
    }
    
    return ans;
}