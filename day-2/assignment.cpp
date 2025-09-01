#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Remainder = " << a % b;




     int n;
    cout << "\nEnter a number: ";
    cin >> n;
    cout << "Square = " << n * n << endl;
    cout << "Cube = " << n * n * n << endl;



    float c, f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    f = (c * 9 / 5) + 32;
    cout << "Fahrenheit = " << f << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "Celsius = " << c << endl;







    float p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;

    float si = (p * r * t) / 100;
    cout << "Simple Interest = " << si << endl;

    float amount = p;
    for (int i = 0; i < t; i++) {
        amount = amount * (1 + r / 100);
    }
    cout << "Compound Interest = " << (amount - p) << endl;






    float radius, length, breadth, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << 3.14159 * radius * radius << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle = " << length * breadth << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << (base * height) / 2 << endl;



    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (a > b) {
        if (a > c)
            cout << "Largest = " << x;
        else
            cout << "Largest = " << c;
    } else {
        if (y > c)
            cout << "Largest = " << y;
        else
            cout << "Largest = " << z;
    }




     int year;
    cout << "\nEnter year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        cout << "Leap Year\n";
    else
        cout << "Not a Leap Year\n";





    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible to Vote\n";
    else
        cout << "Not Eligible to Vote\n";




    int subMarks;
    cout << "Enter marks: ";
    cin >> subMarks;

    if (subMarks >= 90)
        cout << "Grade A";
    else if (subMarks >= 75)
        cout << "Grade B";
    else if (subMarks >= 50)
        cout << "Grade C";
    else
        cout << "Grade F";





    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout << "Vowel";
    else
        cout << "Consonant";





    char op;
    float numA, numB;
    cout << "Enter operator (+,-,*,/): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> numA >> numB;

    switch(op) {
        case '+': cout << "Result = " << numA + numB; break;
        case '-': cout << "Result = " << numA - numB; break;
        case '*': cout << "Result = " << numA * numB; break;
        case '/': 
            if (b != 0) cout << "Result = " << numA / numB;
            else cout << "Division by zero not allowed";
            break;
        default: cout << "Invalid operator";
    }





    int month;
    cout << "\nEnter month number (1-12): ";
    cin >> month;

    switch(month) {
        case 1: cout << "January - 31 days"; break;
        case 2: cout << "February - 28/29 days"; break;
        case 3: cout << "March - 31 days"; break;
        case 4: cout << "April - 30 days"; break;
        case 5: cout << "May - 31 days"; break;
        case 6: cout << "June - 30 days"; break;
        case 7: cout << "July - 31 days"; break;
        case 8: cout << "August - 31 days"; break;
        case 9: cout << "September - 30 days"; break;
        case 10: cout << "October - 31 days"; break;
        case 11: cout << "November - 30 days"; break;
        case 12: cout << "December - 31 days"; break;
        default: cout << "Invalid Month";
    }





    char character;
    cout << "\nEnter a character: ";
    cin >> character;

    switch(character) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel"; break;
        default: cout << "Consonant";
    }






     int marks;
    cout << "\nEnter marks: ";
    cin >> marks;

    switch(marks / 10) {
        case 10:
        case 9: cout << "Distinction"; break;
        case 8:
        case 7: cout << "Pass"; break;
        case 6:
        case 5: cout << "Pass"; break;
        default: cout << "Fail";
    }





    int LastNum;
    cout << "\nEnter a number: ";
    cin >> LastNum;

    switch(LastNum % 2) {
        case 0: cout << "Even"; break;
        case 1: cout << "Odd"; break;
    }




    return 0;
}











