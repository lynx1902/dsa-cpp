#include<bits/stdc++.h>
using namespace std;

vector <int> sortingWithComparator(vector <int> a,bool flag){
    int n = a.size();
    for(int i=1;i<n;i++){
        int current = a[i];
        int prev = i-1;
        if(flag==true){
        while(prev>=0 && a[prev]>current){
            a[prev+1] = a[prev];
            prev = prev - 1;
            }
        }
        else{
            while(prev>=0 && a[prev]<current){
            a[prev+1] = a[prev];
            prev = prev - 1;
            }
        }
        a[prev+1] = current;
    } 
    return a;
}


int main()
{
    vector <int> arr = {-2,3,4,-1,5,-12,6,1,3};

    vector <int> a = sortingWithComparator(arr,false);

    for(int x:a){
        cout<<x<<",";
    } 

    return 0;
}