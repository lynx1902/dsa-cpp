#include<bits/stdc++.h>
using namespace std;
 
vector<pair<int,int>> sortCartesian(vector <pair<int,int>> v){
    int n = v.size();

    for(int i=0;i<n-1;i++){
        
        int min_pos = i;
        for(int j=i;j<n;j++){
            if(v[j].first == v[min_pos].first){
                if(v[j].second < v[min_pos].second){
                min_pos = j;
                }
            }
            else if(v[j].first < v[min_pos].second){
                min_pos = j;
            }
        }
        swap(v[i],v[min_pos]);
    }
    return v;
}

int main()
{   
    vector <pair<int,int>> arr = {{3,2},{5,6},{1,2}};

    vector <pair<int,int>> a = sortCartesian(arr);

    for(int i =0;i<a.size();i++)
    {
        cout<<"("<<a[i].first<<","<<a[i].second<<")"<<" ";
    }
 
    return 0;
}