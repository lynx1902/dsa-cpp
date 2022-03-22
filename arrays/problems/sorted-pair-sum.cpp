#include<bits/stdc++.h>
using namespace std;
 
pair <int,int> sortedPairSum(vector <int> arr, int x){
    int diff = INT_MAX,l1=0,l2=0;
    pair <int,int> ans;
    for (int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(abs((arr[i]+arr[j])-x) < diff){
                l1=arr[i];
                l2 = arr[j];
                diff = abs((arr[i]+arr[j]) - x);
            }
        }
    }
    return make_pair(l1,l2);
}

int main()
{
    vector <int> a = {10,22,28,29,30,40};
    int x = 54;

    pair <int,int> ans = sortedPairSum(a,x);

    cout<<ans.first<<","<<ans.second<<endl;
 
    return 0;
}