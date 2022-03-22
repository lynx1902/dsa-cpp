#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int defkin(int W,int H,vector<pair<int,int>> position){
    sort(position.begin(),position.end());
    int maxRow = 0,maxCol=0;
    for(int i=0;i<position.size()-1;i++){
        if((position[i+1].first - position[i].first) > maxCol){
            maxCol = position[i+1].first - position[i].first;
            maxCol = maxCol - 1;
        }
    }
    int dCol = W - position[position.size()-1].first;
    maxCol = max(maxCol,dCol);
    sort(position.begin(),position.end(),sortbysec);
    for(int j=0;j<position.size()-1;j++){
        if((position[j+1].second - position[j].second) > maxRow){
            maxRow = position[j+1].second - position[j].second;
            maxRow = maxRow - 1;
        }
    }
    int dRow = H - position[position.size()-1].second;
    maxRow = max(maxRow,dRow);
    return (maxRow)*(maxCol);

}
int main(){
    vector <pair<int,int>> pos = {{3,8},{11,2},{8,6}};
    cout<<defkin(15,8,pos);
}