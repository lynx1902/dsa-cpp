#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int>length,int D){
    int count = 0;
    if(length.size()==0 || length.empty()){
        return count;
    }
    sort(length.begin(),length.end());
    for(int i=0;i< length.size()-1 and abs(length[i]-length[i+1])<=D;){
        count++;
        i += 2;
    }
    return count;
    
}