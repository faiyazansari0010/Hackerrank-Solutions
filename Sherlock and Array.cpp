#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

string balancedSums(vector<int> arr) {
    int sumArray[arr.size()];
    sumArray[0] = arr[0];
    
    for(int i=1;i<arr.size();i++){
        sumArray[i] = sumArray[i-1] + arr[i];
    }
    
    for(int i=0;i<arr.size();i++){
        int leftSum = sumArray[i] - arr[i];
        int rightSum = sumArray[arr.size()-1] - sumArray[i];
        if(leftSum==rightSum){
            return "YES";
        }
    }
    
    return "NO";
}