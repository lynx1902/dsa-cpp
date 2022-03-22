#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> printPascal(int n){
    vector<vector<int>> pT;
    vector<int> pR;

    for(int i=0;i<n;i++){
        pR.clear();
        
        for(int j=0;j<=i;j++){
           if(j==0 || j==i){
               pR.push_back(1);
           }
           else {
               
               pR.push_back(pT[i-1][j-1]+pT[i-1][j]);
           } 
        }
        pT.push_back(pR);
    }
    return pT;
}

int main(){
    int n = 5;
    vector<vector<int>> a = printPascal(n);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}