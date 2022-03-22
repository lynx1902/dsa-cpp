#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    string str;
    int index=0;
    for(int i=0;i<S.size();i++){
        if(S[i]=='a' or S[i]=='e' or S[i]=='i' or S[i]=='o' or S[i]=='u'){
            str.push_back(S[i]);
        }
    }
    return str;
}

int main(){
    string s = "aeoibsddaeioudb";
    cout<<vowel(s);

    return 0;
}