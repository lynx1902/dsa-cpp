#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int start=0,end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid-1;

        }
        else{
            start = mid+1;
        }
       
    }
    return -1;
}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    int index = binary_search(arr,n,key);

    if(index!=-1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else {
        cout<<key<< " is NOT FOUND";
    }

    return 0;
}