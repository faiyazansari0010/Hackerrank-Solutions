// Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. 
// Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void miniMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    
    long long minimumNo=0, maximumNo=0;
    for(int i=0;i<arr.size();i++){
        if(i!=(arr.size()-1)){
            minimumNo += arr[i];   
        }
        
        if(i!=0){
            maximumNo += arr[i];     
        }
        
    }
    
    cout<<minimumNo<<" "<<maximumNo;
}
