#include<bits/stdc++.h>
using namespace std;

bool comparePrice(pair<string,int> a,pair <string,int> b){
    return a.second < b.second;    
}



vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    if(S=="price"){
        sort(v.begin(),v.end(),comparePrice);
    }
    else {
        sort(v.begin(),v.end());
    }
    return v;
}