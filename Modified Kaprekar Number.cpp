#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

bool isKaprekar(long long int num){
    
    long long int numSq = num * num; 
    
    int num1, num2;
    string str = to_string(num);
    int d = str.size();
    string str1 = to_string(numSq);
    int n = str1.size();
    
    if(str1.size() == 1){
        num1 = stoi(str1);
        if(num1==num){
            return true;
        }
        return false;
    }
    
    num1 = stoi(str1.substr(0, n-d));
    num2 = stoi(str1.substr(n-d));
    
    if((num1 + num2) == num){
        return true;
    }
    
    return false;
}


void kaprekarNumbers(int p, int q) {
    bool flag = 0;
    for(long long int i=p;i<=q;i++){
        if(isKaprekar(i) == true){
            cout<<i<<" ";
            flag = 1;
        }
    }
    
    if(flag==0){
        cout<<"INVALID RANGE";
    }
}