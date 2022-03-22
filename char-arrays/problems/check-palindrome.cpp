#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    string s = str;
    reverse(str.begin(),str.end());
    if(s == str){
        return true;
    }
    else {
        return false;
    }
}