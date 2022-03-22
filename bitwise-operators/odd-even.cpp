// check if number is even or odd. Simply check whether last bit is 1 or 0

#include<iostream>
using namespace std;
 
int main()
{
    int x;
    cin>>x;

    if(x&1){
        cout<<"Odd"<<endl;

    } else {
        cout<<"Even"<<endl;
    }


    return 0;
}