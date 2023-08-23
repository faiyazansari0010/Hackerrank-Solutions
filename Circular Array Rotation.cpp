#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    k = k%a.size();
    
    vector<int>rot;
    for(int i=a.size()-k;i<a.size();i++){
        rot.push_back(a[i]);
    }
    
    for(int i=0;i<a.size()-k;i++){
        rot.push_back(a[i]);
    }
    
    vector<int>ans;
    for(int i=0;i<queries.size();i++){
        ans.push_back(rot[queries[i]]);
    }
    
    return ans;
}