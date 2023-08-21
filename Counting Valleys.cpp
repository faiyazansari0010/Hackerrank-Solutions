#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int countingValleys(int steps, string path) {
    int *height = new int[steps+1];
    height[0] = 0;
    
    for(int i=1;i<=steps;i++){
        if(path[i-1] =='U'){
            height[i] = height[i-1] + 1;
        }    
        else{
            height[i] = height[i-1] - 1;
        }
    }
    
    int noOfValleys = 0;
   for(int i = 1; i <= steps; i++) {
        if(height[i-1] == 0 && height[i] < 0) {
            noOfValleys++;
        }
    }
    
    return noOfValleys;
}