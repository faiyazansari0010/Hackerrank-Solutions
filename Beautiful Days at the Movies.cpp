#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int reverse(int n){
    int num = 0;
    while(n>0){
        int base = n%10;
        num = num*10 + base;
        n = n/10;
    }
    return num;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;
    
    for(int a = i; a<=j; a++){
        int rev = reverse(a);
        if( (a-rev) % k == 0){
            count++;
        }
    }
    return count;
}