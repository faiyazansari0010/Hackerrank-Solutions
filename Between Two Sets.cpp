#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        
        else{
            b = b%a;
        }
    }
    
    if(a==0){
        return b;
    }
    
    return a;
}

int lcm(int a, int b){
    return ( (a*b) / gcd(a, b) );
}


int getTotalX(vector<int> a, vector<int> b) {
    int st = *max_element(a.begin(), a.end());
    int end = *min_element(b.begin(), b.end());
    
    int l = a[0], g = b[0];
    
    for(int i=1; i<a.size(); i++){
        l = lcm(l, a[i]);
    }
    
    for(int i=1; i<b.size(); i++){
        g = gcd(g, b[i]);
    }
    
    int count = 0;
    for(int i=st;i<=end;i++){
        if( (i%l == 0) && (g%i == 0)){
            count++;
        }
    }
    
    return count;
}