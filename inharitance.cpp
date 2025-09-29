#include <iostream>
using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "This animal eats food." << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "The dog barks." << endl;
//     }
// };

// int main() {
//     Dog myDog;
//     myDog.eat();
//     myDog.bark();
//     return 0;
// }

class AnimalBase {
public:
    void breathe() {
        cout << "This animal breathes air." << endl;
    }
};

class Mammal : public AnimalBase {
public:
    void feedMilk() {
        cout << "This mammal feeds milk to its young." << endl;
    }
};

class Cat : public Mammal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

void multilevelInheritanceDemo() {
    Cat myCat;
    myCat.breathe();
    myCat.feedMilk();
    myCat.meow();
}

int main_multilevel() {
    multilevelInheritanceDemo();
    return 0;
}