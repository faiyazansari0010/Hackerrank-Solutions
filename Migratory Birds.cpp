#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int migratoryBirds(vector<int> arr) {
    int freq[6] = {0};
    
    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }
    
    int maxFreq = -1;
    int maxFreqNum;
    for(int i=0;i<6; i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            maxFreqNum = i;  
        }
    }
    
    return maxFreqNum;
}