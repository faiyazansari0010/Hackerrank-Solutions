#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    int m = *max_element(height.begin(), height.end());
    
    if(k<=m){
        return m-k;
    }
    
    return 0;
}