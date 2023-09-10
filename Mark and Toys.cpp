#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int count = 0, sum = 0, i=0;
    
    for(int i=0;i<prices.size();i++){
        if(sum > k){
            sum = sum-prices[i];
            break;
        }
        
        sum = sum + prices[i];
        count++;
    }
    
    return count-1;
}