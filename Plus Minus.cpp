// Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
// Print the decimal value of each fraction on a new line with  places after the decimal.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void plusMinus(vector<int> arr) {
    float zeroNo = 0, positiveNo=0, negativeNo=0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            negativeNo++;
        }
        else if(arr[i] > 0){
            positiveNo++;
        }
        else{
            zeroNo++;
        }
    }
    
    zeroNo = zeroNo/arr.size();
    positiveNo = positiveNo/arr.size();
    negativeNo = negativeNo/arr.size();
    
    cout<<positiveNo<<endl;
    cout<<negativeNo<<endl;
    cout<<zeroNo<<endl;
}