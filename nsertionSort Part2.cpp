#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void insertionSort2(int n, vector<int> arr) {
    for(int i=1;i<arr.size();i++){
        int num = arr[i];
        int j=i;
        while(j>0 && arr[j-1] > num){
            arr[j] = arr[j-1];
            j--;
        }
        
        arr[j] = num;
        
        for(int k=0;k<arr.size();k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    
}