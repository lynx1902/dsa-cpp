#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> v1,pair<int,int> v2){
    float sqrt1 = sqrt(pow(v1.first,2)+pow(v1.second,2)); 
    float sqrt2 = sqrt(pow(v2.first,2)+pow(v2.second,2));
    return sqrt1<sqrt2; 
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    sort(v.begin(),v.end(),compare);

    return v;
}  