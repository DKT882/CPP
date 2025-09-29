#include<iostream>
using namespace std;

int main(){

    // question 1st
    int Odd_Even;
    cout<<"enter a no. :";
    cin>>Odd_Even;
    if (Odd_Even%2==0){
        cout<<"Your no. is even\n";
    }
    else{
        cout<<"your no. is odd\n";
    }


    // question 2nd >=90 a , > 75 b , >50 c, else fail
    int TotalMarks;
    cout<<"enter Your marks: ";
    cin>>TotalMarks;
    if (TotalMarks>=90){
        cout<<"Grade A\n";
    }
    else if (TotalMarks>=75){
        cout<<"Grade B\n";
    }
    else if (TotalMarks>=50){
        cout<<"Grade C\n";
    }
    else{
        cout<<"you are fail\n";
    }

    //question 3rd
    int DayNumber;
    cout<<"enter a no. ";
    cin>>DayNumber;

    switch (DayNumber)
    {
    case 1:
        cout<<"Mon\n";
        break;
    case 2:
        cout<<"Tues\n";
        break;
    case 3:
        cout<<"Wed\n";
        break;
    case 4:
        cout<<"Thu\n";
        break;
    case 5:
        cout<<"Fri\n";
        break;
    case 6:
        cout<<"Sat\n";
        break;
    case 7:
        cout<<"Sun\n";
        break;
    default:
        cout<<"Not a valid day\n";
        break;
    }


    // question 4th

    for (int i=1;i <=10;i++){
        cout<<5<<"X"<<i<<"="<<5*i<<"\n";
    }

    //question 5th
    // using while loop
    int k=1;
    while (k<=5){
        cout<<k<<endl;
        k++;
    }
    //using do_wile loop
    int doWhile=1;
    do{
        cout<<doWhile<<endl;
        doWhile++;
    }while(doWhile<=5);
    
    return 0;
}