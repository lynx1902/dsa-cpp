#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector <int>arr,int val){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=val){
            ans = arr[i];
        }
    }
    if(ans==0){
        return -1;
    }
    else{
        return ans;
    }
} 


int main()
{
    vector <int> a = {10,20,30,40,50};
    int val = 5;

    int lb = lowerBound(a,val);

    cout<<lb<<endl;

    return 0;
}