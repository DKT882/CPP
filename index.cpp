#include <iostream>
using namespace std;

int main(){
    int num1; // +,-,0 <----done---->
    float sub1,sub2,sub3;
    float larg1,larg2,larg3;
    int divisibleBy5nd11;
    int day;

    cout<<"\nenter first number to check +,-,0";
    cin>>num1;
    if (num1==0){
        cout<<"\nyour number is zero";
    }
    else if (num1>=0){
        cout<<"\nyour number is +ve";
    }
    else if (num1<=0){
        cout<<"\nyour number is -ve";
    }
    
    cout<<"\nenter Marks of 3 subs";
    cin>>sub1;
    cin>>sub2;
    cin>>sub3;
    if (sub1<=33 && sub2<=33 && sub3<=33){
        cout<<"\nYou are fail";
    }
    else{
        cout<<"\nYou are pass";
    }
    
    cout<<"enter 3 numbers to compare";
    cin>>larg1;
    cin>>larg2;
    cin>>larg3;
    if (larg1<=larg2){
        if(larg2<=larg3){
            cout<<endl<<larg3<<" is the largest number";
        }
        else{
            cout<<endl<<larg2<<" is the largest number";
        }
    }
    else{
        cout<<endl<<larg1<<" is the largest number";
    }
    cout<<"enter a no to check disible by 9 or 11";
    cin>>divisibleBy5nd11;
    if (divisibleBy5nd11%5==0 && divisibleBy5nd11%11==0){
        cout<<"Your number is divisible by 5 and 11";
    }
    else{
        cout<<"YOur no. is not divisible by 5 & 11";
    }

    cout << "enter day";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Mon"<<endl;
        break;
    case 2:
        cout<<"Tue"<<endl;
        break;
    case 3:
        cout<<"Wed"<<endl;
        break;
    case 4:
        cout<<"Thu"<<endl;
        break;
    case 5:
        cout<<"Fri"<<endl;
        break;
    case 6:
        cout<<"Sat"<<endl;
        break;
    case 7:
        cout<<"Sun"<<endl;
        break;
    default:
        cout<<"not a day"<<endl;
        break;
    }
}