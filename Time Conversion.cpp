// Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

// Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
// - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

string timeConversion(string s) {
    if(s[8] == 'A'){
        if(s[0] == '1' && s[1] == '2'){
            s[0] = s[1] = '0';
        }
    }
    
    else{
        if(s[1] == '8'){
            s[0] = '2';
            s[1] = '0';
        }
        
        else if(s[1] == '9'){
            s[0] = '2';
            s[1] = '1';
        }
        
        else if(! (s[0]=='1' && s[1]=='2')){
            s[0] += 1;
            s[1] += 2;
        }
    }
    
    s.erase(8, 2);
    return s;
}