#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int pickingNumbers(vector<int> a) {
    int freq[101] = {0};
    
    for(int i=0;i<a.size();i++){
        freq[a[i]]++;
    }
    
    int maxLen = 0;
    int currMaxLen = 0;
    for(int i=1;i<101;i++){
        
        currMaxLen += freq[i] + freq[i-1];
        maxLen = max(maxLen, currMaxLen);
        currMaxLen = 0;
    }
    
    return maxLen;
}
