#include<iostream>
using namespace std;

// Sort elements in increasing order using bubble sort
void bubbleSort(int a[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }

    return 0;
}