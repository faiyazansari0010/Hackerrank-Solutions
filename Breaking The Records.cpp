#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int lowestScore = scores[0], highestScore = scores[0], bestCount = 0, worstCount = 0;
    
    vector<int>ans;
    
    if(scores.size() == 1){
        ans.push_back(0);
        ans.push_back(0);
        return ans;
    }
    
    for(int i=1;i<scores.size();i++){
        if(scores[i] > highestScore){
            highestScore = scores[i];
            bestCount++;
        }
        
        else if(scores[i] < lowestScore){
            lowestScore = scores[i];
            worstCount++;
        }
    }

    ans.push_back(bestCount);
    ans.push_back(worstCount);
    
    return ans;
}