#include<iostream>
using namespace std;

// Find sum of subarray using bruteforce approach
int largestSubArraySum(int arr[],int n){

    int largestSum = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subArraySum = 0;
            for(int k=i;k<=j;k++){
                subArraySum += arr[k];
            }
            // check if subArraySum > largestSum
            largestSum = max(largestSum,subArraySum);
        }
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