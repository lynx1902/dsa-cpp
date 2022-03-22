#include<iostream>
using namespace std;

// This code has to be improved significantly
 
int main()
{
    char route[1000];
    
    cin.getline(route,1000);

    int x,y = 0;

    for(int i=0; route[i]!='\0';i++){
        switch(route[i]){
            case 'N': y++;
                      break;
            case 'S': y--;
                      break;
            case 'E': x++;
                      break;
            case 'W': x--;
                      break;
        }
    }
    cout<<"Final x and y is: "<<x<<" "<<y<<endl;

    if (x>0 and y>0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"N";
        }
    }
    else if (x<0 and y>0){
        while(x--){
            cout<<"W";
        }
        while(y--){
            cout<<"N";
        }
    }
    else if (x<0 and y<0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"S";
        }
    }
    else if (x>0 and y<0){
        while(x--){
            cout<<"E";
        }
        while(y--){
            cout<<"S";
        }
    }

    return 0;
}