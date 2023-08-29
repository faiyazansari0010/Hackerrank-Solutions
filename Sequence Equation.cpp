#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int>ans;
    unordered_map<int, int>mp;
    
    int n=p.size();
    for(int i=0;i<n;i++){
        mp[p[i]] = i+1;
    }
    
    for(int i=1;i<=n;i++){
        int x = i;
        int idx1 = mp[x];
        int idx2 = mp[idx1];
        
        ans.push_back(idx2);
    }
    
    return ans;
}