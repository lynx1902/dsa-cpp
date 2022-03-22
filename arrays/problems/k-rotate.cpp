#include<bits/stdc++.h>
using namespace std;
 
vector<int> kRotate(vector <int> a, int k){
    
    int temp = 0;
    while(k>0){
        temp = a.back();
        a.pop_back();
        a.insert(a.begin(),temp);
        k--;
    }
    return a;
}

int main()
{   
    vector <int> a = {1,3,5,7,9};
    int k = 2;
 
    vector <int> b = kRotate(a,k);

    for(int i=0;i<b.size();i++){
        cout<<b[i]<<",";
    }
    

    return 0;
}


