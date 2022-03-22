#include<bits/stdc++.h>
using namespace std;

bool arePermutation(string A,string B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int flag=0;
    for(int i=0;i<A.size();i++){
        if(A[i]!=B[i]){
            flag=1;
        }
    }
    if(flag==1){
        return false;
    }
    else {
        return true;
    }
}