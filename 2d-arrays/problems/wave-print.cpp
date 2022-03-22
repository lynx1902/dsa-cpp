#include<bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m,int n,vector<vector<int>> arr){
    int printDown = n-1;
    int printUp = n-2;

    vector<int> ans;

    while(printDown>=0 and printUp>=0){
        for(int i=0;i<m;i++){
            // cout<<arr[i][printDown]<<" ";
            ans.push_back(arr[i][printDown]);
        }

        for(int j=m-1;j>=0;j--){
            // cout<<arr[j][printUp]<<" ";
            ans.push_back(arr[j][printUp]);
        }

        printUp = printUp - 2;
        printDown = printDown - 2;

    }
    return ans;

}
int main(){
    vector <vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    vector<int> ans = WavePrint(4,4,arr);

    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }
    cout<<endl;
}

