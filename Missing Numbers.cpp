#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    int freqArr[10001] = {0};
    int freqBrr[10001] = {0};
    
    for(int i=0;i<arr.size(); i++){
        freqArr[arr[i]]++;
    }
    
    for(int j=0;j<brr.size(); j++){
        freqBrr[brr[j]]++;
    }
    
    vector<int> ans;
    
    for(int i=0;i<10001;i++){
        if(freqArr[i] != freqBrr[i]){
            ans.push_back(i);
        }
    }
    
    return ans;
}