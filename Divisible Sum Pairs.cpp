#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    int count = 0;
    for(int i=0; i<n-1; i++){
        int sum = ar[i];
        for(int j=i+1; j<n; j++){
            if( (sum + ar[j]) % k == 0){
                count++;
            }
        }
    }
    
    return count;
}