#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        
        for (int j = 0; j < 10; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    int num=10;
    cout<<endl;
    int temp=1;
    for (int i = 0; i < num*2; i++)
    {

        if (i<=num){
            for (int j = 0; j < i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else if(i>num){
            for (int j = (num-temp); j > 0; j--)
            {
                cout<<"*";
            }
            temp+=1;
            cout<<endl;
        }
    }

    cout<<endl<<endl;
    int lastNumber=20;
    for(int i=1;i<=lastNumber;i++){
        for (int j = 1; j <= lastNumber; j++)
        {
           if (i==1 || i==lastNumber || j==1 || j==lastNumber){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
        
    }

}