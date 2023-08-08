// ou are choreographing a circus show with various animals. For one act, you are given two kangaroos on a number line ready to jump in the positive direction (i.e, toward positive infinity).

// The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
// The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.
// You have to figure out a way to get both kangaroos at the same location at the same time as part of the show. If it is possible, return YES, otherwise return NO.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1 <= v2){
        return "NO";
    }
    
    else{
        int x = x1-x2;
        int v = v2-v1;
        if(x%v == 0){
            return "YES";
        }
        
        else{
            return "NO";
        }
    }
}