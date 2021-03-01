#ifndef dog_code
#define dog_code

#include <string>
#include <iostream>

using namespace std;

class Dog{
    string name;
    int age;
    string breed;

public:
    Dog(string name, int age, string breed);
    Dog();
    
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    string getBreed();
    void setBreed(string breed);
};
#endif