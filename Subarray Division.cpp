#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    vector<int> sumArray(s.size());
    
    sumArray[0] = s[0];
    for(int i=1;i<s.size();i++){
        sumArray[i] = sumArray[i-1] + s[i];
    }
    
    int count = 0;
    
    for(int i=0;i<s.size();i++){
        
        int idx = i-m+1;
        if(idx >= 0){
            if(sumArray[m-1] == d && count == 0){
                count++;
            }    
            
            else if(sumArray[i] - sumArray[i-m] == d){
                count++;
            }
        }
    }
    
    return count;
}