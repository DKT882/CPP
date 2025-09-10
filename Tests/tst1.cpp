#include<iostream>
using namespace std;

int main(){

    // question 1st
    int Odd_Even;
    cout<<"enter a no.";
    cin>>Odd_Even;
    if (Odd_Even%2==0){
        cout<<"Your no. is even";
    }
    else{
        cout<<"your no. is odd";
    }


    // question 2nd >=90 a , > 75 b , >50 c, else fail
    int TotalMarks;
    cout<<"enter Your marks";
    cin>>TotalMarks;
    if (TotalMarks>=90){
        cout<<"Grade A";
    }
    else if (TotalMarks>=75){
        cout<<"Grade B";
    }
    else if (TotalMarks>=50){
        cout<<"Grade C";
    }
    else{
        cout<<"you are fail";
    }

    //question 3rd
    int DayNumber;
    cout<<"enter a no. ";
    cin>>DayNumber;

    switch (DayNumber)
    {
    case 1:
        cout<<"Mon";
        break;
    case 2:
        cout<<"Tues";
        break;
    case 3:
        cout<<"Wed";
        break;
    case 4:
        cout<<"Thu";
        break;
    case 5:
        cout<<"Fri";
        break;
    case 6:
        cout<<"Sat";
        break;
    case 7:
        cout<<"Sun";
        break;
    default:
        cout<<"Not a valid v";
        break;
    }


    return 0;
}