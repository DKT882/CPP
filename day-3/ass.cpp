#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;
    return 0;
    // kjlaknckasd
}



#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed = " << rev << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\nMenu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice) {
            case 1: cout << "Result = " << a + b << endl; break;
            case 2: cout << "Result = " << a - b << endl; break;
            case 3: cout << "Result = " << a * b << endl; break;
            case 4: 
                if(b != 0) cout << "Result = " << a / b << endl;
                else cout << "Error: Division by zero!\n";
                break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 5);

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num == 0) count = 1; // special case for 0
    while(num != 0) {
        num /= 10;
        count++;
    }

    cout << "Digits = " << count << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if(num == rev) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int secret = 42;  // fixed secret number (you can change it)
    int guess;

    cout << "Guess the number (between 1 and 100):\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if(guess > secret) 
            cout << "Too high!\n";
        else if(guess < secret) 
            cout << "Too low!\n";
        else 
            cout << "Correct! The number was " << secret << endl;

    } while(guess != secret);

    return 0;
}