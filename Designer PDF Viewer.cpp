#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int maxHeight = 0;
    for(int i=0;i<word.size();i++){
        int currHeight = h[ word[i]  - 'a' ];
        maxHeight = max(maxHeight, currHeight);
    }
    
    int n = word.size();
    return maxHeight*n;
}