#include<iostream>
using namespace std;
// Given a sentence count number of digits,spaces and alphabets in sentence

int main()
{
    char ch;

    ch = cin.get();

    int alpha = 0,space = 0,digit = 0;
    
    while(ch!='\n'){
        if(ch>='0' and ch<='9'){
            digit++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            space++;
        }

        ch = cin.get();
    }

    cout<<"Total Alphabets "<<alpha<<endl;
    cout<<"Total Digits "<<digit<<endl;
    cout<<"Total Spaces "<<space<<endl;
    return 0;
}