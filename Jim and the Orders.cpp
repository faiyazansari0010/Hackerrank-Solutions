#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

vector<int> jimOrders(vector<vector<int>> orders) {
    vector<pair<int, int>> serveTime; 

    for (int i = 0; i < orders.size(); i++) {
        int customer = i + 1;
        int serve = orders[i][0] + orders[i][1];
        serveTime.push_back({serve, customer});
    }

    sort(serveTime.begin(), serveTime.end()); 

    vector<int> receiveTime;
    for (auto p : serveTime) {
        receiveTime.push_back(p.second); 
    }

    return receiveTime;
}