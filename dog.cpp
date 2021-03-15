/*
 * Programming Assignment 2
 * Created 2021-02-25
 * Douglas Dawson
 */

#include <string>
#include <iostream>
#include "dog.h"

string Dog::getName() const
{
    return name;
}

void Dog::setName(string name)
{
    name = name;
}


int Dog::getAge() const
{
    return age;
}

void Dog::setAge(int age)
{
    age = age;
}


string Dog::getBreed() const
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

