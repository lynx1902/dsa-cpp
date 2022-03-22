// Find max and min from an array
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> arr = {1,6,3,7,23,78};

    int min = INT16_MAX;
    int max = INT16_MIN;

    // simple bruteforce approach


    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }

    
    
    cout<<"max is "<<max<<" and min is "<<min<<endl;

    return 0;
}