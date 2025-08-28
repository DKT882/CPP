#include <iostream>
using namespace std;

int main(){
    int n,multiple,NoReverse;
    
    cout<<"enter n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }
    

    cout<<"enter no. for table : ";
    cin>>multiple;
    for (int i = 1; i <= 10; i++)
    {
        cout<<multiple<<" X "<<i<<" = "<<i*multiple<<endl;
    }
    
    // cout<<"enter a number for reverse : ";
    // cin>>NoReverse;
    // int length=0;
    // for (int i = 0; i < NoReverse; i++)
    // {
    //     if (NoReverse>9)
    //     {
    //         NoReverse/=10;
    //         length=NoReverse;
    //     }
        
    // }
    
    
    int star;
    cout<<"enterStart";
    cin>>star;
    for (int i = 0; i < star; i++)
    {
        for (int j = 0; j < star-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < (i*2)-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
}