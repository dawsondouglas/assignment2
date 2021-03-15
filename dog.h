#ifndef dog_code
#define dog_code

#include <string>
#include <iostream>

using namespace std;
//dog object class
class Dog{
    string name; //holds name
    int age; //holds age
    string breed; //holds breed

public:
    Dog(string name, int age, string breed);
    Dog();
    
    string getName() const;
    void setName(string name);
    int getAge() const;
    void setAge(int age);
    string getBreed() const;
    void setBreed(string breed);
};
#endif