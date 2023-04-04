#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Abstract Food class
class Food {
public:
    virtual void prepare() = 0;
};

// Concrete Breakfast class
class Breakfast : public Food {
public:
    void prepare() override {
        cout << "Preparing breakfast..." << endl;
        // Prepare breakfast specific dishes here
    }
};

// Concrete Lunch class
class Lunch : public Food {
public:
    void prepare() override {
        cout << "Preparing lunch..." << endl;
        // Prepare lunch specific dishes here
    }
};

// Concrete Dinner class
class Dinner : public Food {
public:
    void prepare() override {
        cout << "Preparing dinner..." << endl;
        // Prepare dinner specific dishes here
    }
};

// Person class that depends on the abstraction of the Food class
class Person {
public:
    void eat(Food* food) {
        food->prepare();
        cout << "Eating " << typeid(*food).name() << endl;
        // Eat the food here
    }
};

int main() {
    Person person;
    Breakfast breakfast;
    Lunch lunch;
    Dinner dinner;

    person.eat(&breakfast);
    person.eat(&lunch);
    person.eat(&dinner);

    return 0;
}