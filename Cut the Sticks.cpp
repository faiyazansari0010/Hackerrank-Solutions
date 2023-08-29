#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> cutTheSticks(vector<int> arr) {
    vector<int>temp = arr;
    vector<int>ans;
    
    while(temp.empty() == false){
        
        int sm = *min_element(temp.begin(), temp.end());
        
        ans.push_back(temp.size());
        
        for(int i=0;i<temp.size();i++){
            temp[i] = temp[i] - sm;
        }
        
        temp.erase(remove(temp.begin(), temp.end(), 0), temp.end());
    }
    
    return ans;
}