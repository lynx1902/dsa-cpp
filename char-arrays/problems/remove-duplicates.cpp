#include<bits/stdc++.h>
using namespace std;
 
string removeDuplicate(string s){
    sort(s.begin(),s.end());
    string str;
    for(int i=0;i<s.size()-1;i++){
        char ch = s[i];
        for(int j=i+1;j<s.size();j++){
           if(ch == s[j]){
               break;
           }
           else{
               str.push_back(ch);
               break;
           }
        }
    }
    str.push_back(s[s.size()-1]);
    return str;
}
int main(){
    string s = "geeksforgeeks";
    cout<<removeDuplicate(s);
} 
