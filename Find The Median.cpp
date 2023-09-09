#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());
    return arr[(arr.size()-1)/2];
}