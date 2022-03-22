// Reverse an array or string

#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr = {1,2,4,5,67,8};
    
    int start=0;int end=arr.size()-1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for(int k=0;k<arr.size();k++){

    }

    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}

// another approach of implementation is making a recursive function which includes start+1 and end-1 as params.