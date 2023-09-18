#include "person.h"
#include <iostream>

// Constructor implementation
Person::Person(std::string name, int age) : name_(name), age_(age) {
}

// Setter for name
void Person::setName(std::string name) {
    name_ = name;
}

// Getter for name
std::string Person::getName() {
    return name_;
}

// Setter for age
void Person::setAge(int age) {
    age_ = age;
}

// Getter for age
int Person::getAge() {
    return age_;
}

// Member function to print a greeting
void Person::greet() {
    std::cout << "Hello, my name is " << name_ << " and I am " << age_ << " years old." << std::endl;
}

// Member function to demonstrate loops and conditional statements
void Person::demonstrate() {
    std::cout << "Demonstrating loops and conditional statements:" << std::endl;

    // Using a for loop to count from 1 to 5
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Count: " << i << std::endl;
    }

    // Using a range-based for loop to iterate over an array
    int numbers[] = {10, 20, 30, 40, 50};
    std::cout << "Numbers in the array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Using if-else conditional statement
    if (age_ < 18) {
        std::cout << "I am a minor." << std::endl;
    } else if (age_ >= 18 && age_ < 65) {
        std::cout << "I am an adult." << std::endl;
    } else {
        std::cout << "I am a senior citizen." << std::endl;
    }

    // Using a switch statement
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "It's Monday." << std::endl;
            break;
        case 2:
            std::cout << "It's Tuesday." << std::endl;
            break;
        case 3:
            std::cout << "It's Wednesday." << std::endl;
            break;
        default:
            std::cout << "It's not a weekday." << std::endl;
    }
}
