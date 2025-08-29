#include <iostream>
#include <string>
#include <limits>

int main() {
    using namespace std;
    cout << boolalpha;

    string name;
    int age;
    cout << "Q1) Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello " << name << ", you are " << age << " years old.\n\n";



    cout << "Q2) Variables printed with tabs:\n";
    int     myInt    = 42;
    float   myFloat  = 3.14f;
    char    myChar   = 'A';
    string  myString = "Sample";
    bool    myBool   = true;
    cout << myInt << '\t' << myFloat << '\t' << myChar << '\t' << myString << '\t' << myBool << "\n\n";

    


    int a, b;
    cout << "Q3) Enter two integers (a b): ";
    cin >> a >> b;

    cout << "Addition (a + b): " << (a + b) << '\n';
    cout << "Subtraction (a - b): " << (a - b) << '\n';
    cout << "Multiplication (a * b): " << (a * b) << '\n';

    if (b != 0) {
        cout << "Division (a / b) [integer division]: " << (a / b) << '\n';
        cout << "Division (a / b) [floating]: " << (static_cast<double>(a) / b) << '\n';
        cout << "Modulus (a % b): " << (a % b) << "\n\n";
    } else {
        cout << "Division: undefined (division by zero)\n";
        cout << "Modulus: undefined (modulus by zero)\n\n";
    }

    



    cout << "Q4) Comparisons for a and b:\n";
    if (a > b)       cout << "a is greater than b\n";
    else if (a < b)  cout << "a is less than b\n";
    else             cout << "a is equal to b\n";

    bool bothPositive = (a > 0) && (b > 0);
    cout << "Are both numbers positive? " << bothPositive << "\n\n";

    


    
    cout << "Q5) Pre-increment vs Post-increment (start with x = 5)\n";
    int x = 5;
    cout << "Start: x = " << x << '\n';
    int pre = ++x; // increment, then use
    cout << "After pre-increment (++x): returned " << pre << ", x = " << x << '\n';

    x = 5;         // reset
    cout << "Reset: x = " << x << '\n';
    int post = x++; // use, then increment
    cout << "After post-increment (x++): returned " << post << ", x = " << x << '\n';

    return 0;
}
