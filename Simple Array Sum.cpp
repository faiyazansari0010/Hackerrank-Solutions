#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(int i=0;i<ar.size();i++){
        sum = sum+ar[i];
    }
    return sum;
}

int main(){
    int size, a;
    cin>>size;

    vector<int> arr;
    for(int i=0;i<size;i++){
        cin>>a;
        arr.push_back(a);
    }

    cout<< simpleArraySum(arr);
    return 0;
}