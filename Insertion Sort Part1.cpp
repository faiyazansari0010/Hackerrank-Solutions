#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int num = arr[n-1];
    int i = n-1;
    while(num<arr[i-1]){
        
        arr[i] = arr[i-1];
        i--;
        
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
    arr[i] = num;
    
    for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
    }
}