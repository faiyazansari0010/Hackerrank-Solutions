#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int runningTime(vector<int> arr) {
    
    int count=0;
    for(int i=1;i<arr.size();i++){
        int num = arr[i];
        int j=i;
        while(j>0 && arr[j-1] > num){
            arr[j] = arr[j-1];
            j--;
            count++;
        }
        
        arr[j] = num;
    }
    
    return count;

}