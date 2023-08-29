#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int findDigits(int n) {
    int num = n;
    int count = 0;
    while(num>0){
        int digit = num%10;
        if(digit!=0){
            if(n%digit == 0){
                count++;
            }       
        }
        
        num = num/10;
    }
    
    return count;
}