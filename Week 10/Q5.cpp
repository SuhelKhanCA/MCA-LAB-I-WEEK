#include <iostream>
#include <string>

struct D_O_B {
    int day;
    int month;
    int year;
};

struct Person {
    std::string name;
    D_O_B dob;
};

void printPersonDetails(const Person& person) {
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Date of Birth: " << person.dob.day << "/" << person.dob.month << "/" << person.dob.year << std::endl;
}

int main() {
    Person me;

    me.name = "John Doe";
    me.dob.day = 1;
    me.dob.month = 1;
    me.dob.year = 2000;

    printPersonDetails(me);

    return 0;
}

