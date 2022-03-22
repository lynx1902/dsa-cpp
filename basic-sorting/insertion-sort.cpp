#include<iostream>
using namespace std;

// Sort elements in increasing order using insertion sort
void insertionSort(int a[],int n){
    for(int i=1;i<=n-1;i++){
        int current = a[i];
        int prev = i-1;
        // loop finds correct index for insertion of current element
        while(prev>=0 && a[prev]>current){
            a[prev+1] = a[prev];
            prev = prev-1;
        }
        a[prev+1]= current;
    }
} 

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }

 
    return 0;
}