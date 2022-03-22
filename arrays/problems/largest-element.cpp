#include<bits/stdc++.h>

using namespace std;

int largestElement(vector <int>arr){
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{   
    vector <int> a = {-2,3,4,-1,5,-12,6,1,3};

    int largest = largestElement(a);

    cout<<largest<<endl;
 
    return 0;
}