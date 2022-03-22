#include<iostream>
using namespace std;
 
int main()
{   
    int n;
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++){
        arr[i] = i;
        cout<<arr[i]<<" ";

    }
    delete [] arr; //dynamic array deleted
    
    cout<<arr<<endl; // exists because of static memory
    cout<<arr[2]<<endl;// not recommended because array has been deleted

    return 0;
}