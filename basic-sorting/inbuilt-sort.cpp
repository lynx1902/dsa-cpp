#include<iostream>
#include<algorithm> //for sort function
using namespace std;

// controls ascending or descending
bool compare(int a,int b){
    return a<b;
}

int main()
{   
    int arr[] = {10,9,8,6,5,4,3,2,11,16,8};
    int n = sizeof(arr)/sizeof(int);
    
    // sort(arr,arr+n,compare);
    sort(arr,arr+n,greater <int>());
    // reverse(arr,arr+n);

    for(int x:arr){
        cout<<x<<",";
    }

    return 0;
}