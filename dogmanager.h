#ifndef dogmanager_code
#define dogmanager_code

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class DogManager{
    vector<Dog> dogList; //holds dogs from file

public:
    DogManager();
    DogManager(string filename);
   
    Dog oldestDog();
    void printDogs();

private:
    void loadDogs(string filename);
};

#endif