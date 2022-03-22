#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& arr){
      for(int i=0;i<arr.size();i++){
            for(int j=0;j<i;j++){
                  swap(arr[i][j],arr[j][i]);
            }
      }
}

void rotate(vector<vector<int>>& matrix) {
      // your code goes here
      transpose(matrix);
      int start=0,end=matrix[0].size()-1;
      while(start<end){
            int p=0;
            for(;p<matrix.size();p++){
                  swap(matrix[p][start],matrix[p][end]);
            }
            start++;
            end--;
      }
      
}
// some circular method for doing this also exists