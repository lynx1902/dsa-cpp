#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector <int>arr){
    int cs = 0,maxSum = INT_MIN;

    for (int i=0;i<arr.size();i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        maxSum  = max(cs,maxSum);
    }
    return maxSum;
} 

int main()
{   
    vector <int> a = {-2,3,4,-1,5,-12,6,1,3};

    int sum = maxSubarraySum(a);

    cout<<sum<<endl;
 
    return 0;
}