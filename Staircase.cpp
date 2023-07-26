// Staircase detail

// This is a staircase of size :

//    #
//   ##
//  ###
// ####
// Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

// Write a program that prints a staircase of size .

// Function Description

// Complete the staircase function in the editor below.

// staircase has the following parameter(s):

// int n: an integer

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void staircase(int n) {
    int i=0;
    while(i<n){
        
        for(int j=0;j<n-i-1; j++){
            cout<<" ";
        }
        
        for(int k=n-i-1;k<n;k++){
            cout<<'#';
        }
        cout<<endl;
        i++;
    }
}
