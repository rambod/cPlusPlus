#ifndef PERSON_H
#define PERSON_H

#include <string> // Include the string library

class Person {
public:
    // Constructor with parameters to initialize the object
    Person(std::string name, int age);

    // Member function to set the name of the person
    void setName(std::string name);

    // Member function to get the name of the person
    std::string getName();

    // Member function to set the age of the person
    void setAge(int age);

    // Member function to get the age of the person
    int getAge();

    // Member function to print a greeting
    void greet();

    // Member function to demonstrate loops and conditional statements
    void demonstrate();

private:
    std::string name_;
    int age_;
};

#endif
