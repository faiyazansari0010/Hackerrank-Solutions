#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans;
    
    for(int i=0;i<grades.size();i++){
        if(grades[i] < 38){
            ans.push_back(grades[i]);
        }
        
        else if(grades[i]%5==0){
            ans.push_back(grades[i]);
        }
        
        else if(grades[i]%5 > 2){
            int newGrade = grades[i] + (5-(grades[i]%5));
            ans.push_back(newGrade);
        }
        
        else{
            ans.push_back(grades[i]);
        }
    }
    
    return ans;
}