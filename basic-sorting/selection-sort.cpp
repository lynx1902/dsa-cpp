#include<iostream>
using namespace std;
 
// Sort elements in increasing order using selection sort 
void selectionSort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int current = a[i];
        int min_pos = i;
        // find out minimum element from unsorted part
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[min_pos]){
                min_pos = j;
            }
        }
        swap(a[i],a[min_pos]);
    }
} 

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }    

    return 0;
}