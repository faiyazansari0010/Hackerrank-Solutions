// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int diagonalSum1 = 0, diagonalSum2 = 0;
    
    for(int i=0;i<arr.size();i++){
      
        diagonalSum1 += arr[i][i];
           
        
    }    
    
    int i=0, j=arr.size()-1;
    
    while(i<arr.size() and j>=0){
        diagonalSum2 += arr[i][j];
        i++; j--;
    }
    
    return abs(diagonalSum1-diagonalSum2);
    
}