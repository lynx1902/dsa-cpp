#include<iostream>
using namespace std;

// Find sum of subarray using kadane's algo
int largestSubArraySum(int arr[],int n){
    int cs=0,largestSum = 0;

    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        largestSum = max(largestSum,cs);
    }
    return largestSum;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);    

    cout<<largestSubArraySum(arr,n)<<endl;
    

    return 0;
}