#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

string catAndMouse(int x, int y, int z) {

    if(abs(z-x) < abs(z-y)){
        return "Cat A";
    }
    
    else if(abs(z-x) > abs(z-y)){
        return "Cat B";
    }
    
    else{
        return "Mouse C";
    }
}