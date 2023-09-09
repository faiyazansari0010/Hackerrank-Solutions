#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    int minDiff = INT_MAX;
    vector<int> ans;
    
    for (int i = 1; i < arr.size(); i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
            ans.clear();
        }
        
        
        if (diff == minDiff) {
            ans.push_back(arr[i - 1]);
            ans.push_back(arr[i]);
        }
    }
    
    return ans;
}