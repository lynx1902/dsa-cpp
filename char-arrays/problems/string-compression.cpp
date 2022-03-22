#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars){
    int n = chars.size();

    int count=1;

    vector<char> s;
    for(int i=0;chars[i]!='\0';i++){
        int count=1;
        while(i<n-1 and chars[i]==chars[i+1]){
            count++;
            i++;
            
        }
        if(count>1){
            s.push_back(chars[i]);
            
            while(count>0){
                int d = count%10;
                s.push_back(d);
                count = count/10;
                }
            
        }
        else {
            s.push_back(chars[i]);
            
        }
    }
    cout<<s.size()<<endl;
    
    chars.clear();
    for(int j=0;j<s.size();j++){
        chars.push_back(s[j]);
    }
    return chars.size();

}
int main(){
    vector <char> chars = {'a','a','a','a','a','a','a','a','a','a','b','b','c','c','c'};
    cout << compress(chars)<<endl;
    return 0;
}