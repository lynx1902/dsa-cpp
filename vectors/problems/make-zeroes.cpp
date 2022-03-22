#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
    vector<int> row;
    vector<int> col;

    int n = arr.size();
    int m = arr[0].size();

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);                                                   
            }
        }
    }
    for(int i=0;i<row.size();i++){
        for(int j=0;j<m;j++){
            arr[row[i]][j]=0;
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<col.size();j++){
            arr[i][col[j]]=0;
        }
    }
    return arr;
}