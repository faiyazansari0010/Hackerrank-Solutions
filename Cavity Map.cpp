#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<string> cavityMap(vector<string> grid) {
    
    int n = grid.size();
    char fill = 'X';
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=0 && j!=0 && i!=n-1 && j!=n-1){
                int cavNum = grid[i][j] - '0';
                int num4 = grid[i-1][j] - '0';
                int num3 = grid[i+1][j] - '0';
                int num2 = grid[i][j-1] - '0';
                int num1 = grid[i][j+1] - '0';
                
                if(cavNum>num1 && cavNum>num2 && cavNum>num3 && cavNum>num4){
                    
                    grid[i][j] = fill;
                }
            }
        }
    }
    
    return grid;
    
}