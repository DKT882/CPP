#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 10; i++)
    {
        
        for (int j = 0; j < 10; j++)
        {
            cout<<"* ";
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
            cout<<"* ";
        }
        cout<<endl;
    }
    

    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}