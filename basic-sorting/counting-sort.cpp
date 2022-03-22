#include<iostream>
#include<vector>
using namespace std;
 
void counting_sort(int a[],int n){
    // find largest element for finding range
    int largest = -1;
    for(int i=0;i<n;i++){
        largest = max(largest,a[i]);
    }
    // create count array
    vector<int> freq(largest+1);

    // update freq array
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    // put back from freq array into og array
    int j=0;
    for (int i=0;i<=largest;i++){
        while(freq[i]>0){
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {88,97,10,12,15,1,5,6,12,5,8};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    
    return 0;
}