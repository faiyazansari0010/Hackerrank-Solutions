#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;


int introTutorial(int V, vector<int> arr) {
    int s = 0, end = arr.size()-1, mid;
    while(s<=end){
        mid = (s+end) / 2;
        
        if(V<arr[mid]){
            end = mid-1;
        }
        
        else if(V>arr[mid]){
            s = mid+1;
        }
        
        else{
            return mid;
        }
    }
    
    return mid;
}