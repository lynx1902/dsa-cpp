#include<bits/stdc++.h>
using namespace std;

vector <int> optimizedBubbleSort(vector <int> arr){
    for(int i=1;i<arr.size();i++){
        int flag=0;
        for(int j=0;j<=arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    return arr;
}

int main()
{
    vector <int> a = {-2,3,4,-1,5,-12,6,1,3};

    vector <int> arr = optimizedBubbleSort(a);
    for(auto x:arr){
        cout<<x<<",";
    }

    return 0;
}