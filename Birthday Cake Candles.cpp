// You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. 
// Count how many candles are tallest.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = 0;
    int count = 1;
    for(int i=0;i<candles.size();i++){
        if(maxHeight < candles[i]){
            maxHeight = candles[i];
        }
        
        else if(maxHeight == candles[i]){
            count++;
        }
    }
    
    return count;
} 