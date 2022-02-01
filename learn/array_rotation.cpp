#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5,6,7};
    int rot[7];
    for (int i =0 ; i<=6 ; i++)
    {
        if(i<5){
        rot[i] = arr [2+i];}
        else{
            rot[i]= arr[i-5];
        }
    }
    
    for(int i=0; i<7;i++)
    {
       
        cout<<rot[i];
    }
    
    return 0;
}