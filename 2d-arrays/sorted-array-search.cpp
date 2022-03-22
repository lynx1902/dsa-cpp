#include<iostream>
using namespace std;
 
// search for an element in a row and column wise sorted 2d array
pair<int,int> staircaseSearch(int arr[][4],int n,int m,int key){
    // later if element is not present return {-1,-1}

    if(key < arr[0][0] or key>arr[n-1][m-1]){
        return {-1,-1};
    }

    // staircase search
    int i = 0;
    int j = m-1;

    while(i<=n-1 and j>=0){
        if(arr[i][j] == key){
            return{i,j};
        }
        else if(arr[i][j]>key){
            j--;
        }
        else {
            i++;
        }
    }
    return {-1,-1};

}


int main()
{
    int arr[][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    
    int n=4,m=4;

    pair<int,int> coords = staircaseSearch(arr,n,m,33);
    cout<< coords.first<<","<<coords.second<<endl;

    return 0;
}
// Brute force approach is applying linear search over the array

// Binary search will take O(nlogm) time

// staircase search can be used which will reduce time complexity to O(n+m)