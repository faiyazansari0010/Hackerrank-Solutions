#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    
    int maxPrice = -1;
    
    for(int i=0;i<keyboards.size();i++){
        
        for(int j=0;j<drives.size();j++){
            if( keyboards[i] + drives[j] <= b)
                maxPrice = max(maxPrice, keyboards[i] + drives[j]);
        }
    }
    return maxPrice;
}