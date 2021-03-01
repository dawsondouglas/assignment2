#include <string>
#include <iostream>
#include "dog.h"

string name;
int age;
string breed;


string Dog::getName()
{
    return name;
}

void Dog::setName(string name)
{
    name = name;
}


int Dog::getAge()
{
    return age;
}

void Dog::setAge(int age)
{
    age = age;
}


string Dog::getBreed()
{
    return breed;
}


void Dog::setBreed(string breed)
{
    breed = breed;
}

Dog::Dog(string name, int age, string breed) {
    Dog::name = name;
    Dog::age = age;
    Dog::breed = breed;
}

Dog::Dog() {}

