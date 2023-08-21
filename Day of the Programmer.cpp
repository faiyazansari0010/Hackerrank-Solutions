#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

string dayOfProgrammer(int year) {
    string ans;
    
    if(year <= 1917){
        if(year % 4 == 0){
            ans = "12.09." + to_string(year);
        }
        
        else{
            ans = "13.09." + to_string(year);
        }
    }
    
    else if(year >= 1919){
        if(year % 400 == 0){
            ans = "12.09." + to_string(year);
        }
        
        else if(year%4==0 && year%100 != 0){
            ans = "12.09." + to_string(year);
        }
        
        else{
            ans = "13.09." + to_string(year);
        }
    }
    
    else{
        ans = "26.09." + to_string(year);
    }
    
    return ans;
}