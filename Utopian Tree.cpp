#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int utopianTree(int n) {
    int period = 1;
    int height = 1;
    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            height += 1;
        }
        
        else{
            height = 2*height;
        }
    }
    
    return height;
}