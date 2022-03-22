#include<bits/stdc++.h>
#include<string>

using namespace std;

int binarytoDecimal(string s){
    int num = stoi(s);
    int i=0;
    int sum=0;
    while(num>0){
        int d = num%10;
        sum += (int)pow(2,i)*d;
        num = num/10;
        i++;
    }
    return sum;
}

    