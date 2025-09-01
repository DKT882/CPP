#include <iostream>
using namespace std;

int main(){
    int a=10;
    cout<<++a<<endl;
    cout<<a<<endl;

    int number=12;
    if (number%2==0)
    {
        cout<<"your no. is even\n";
    }
    else{
        cout<<"your no. is odd\n";
    }
    
    int marks;
    cout<<"enter your avg marks: ";
    cin>>marks;
    if (marks>=90&&marks<=100){
        cout<<"tujhe nai degi\n";
    }
    else if(marks>75){
        cout<<"mdrchd\n";
    }
    else if(marks > 50 ){
        cout<<"tu to layak hi nai\n";
    }
    else{
        cout<<"gnd mra\n";
    }

}