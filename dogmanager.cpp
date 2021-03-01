#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <fstream>
#include "dogtableprinter.h"
#include "dogmanager.h"
#include "dog.h"

using namespace std;

vector<Dog> dogList;
DogTablePrinter dogTablePrinter;

DogManager::DogManager() {

}

DogManager::DogManager(string filename) {
    loadDogs(filename);
}

void DogManager::loadDogs(string filename) {
    fstream file;
    string line;
    try
    {
        file.open(filename);
        if (file.fail())
        throw exception();
    }
    catch(const std::exception& e)
    {
        cout << "File " << filename << "could not be opened";
        throw e;
    }

    while (!file.eof())
    {
        if (getline(file,line))
        {
            try
            {
                
                string tName;
                int tAge;
                string tBreed;

                stringstream ss(line);
                if (!ss.eof())
                ss >> tName;
                if (!ss.eof())
                ss >> tAge;
                if (!ss.eof())
                ss >> tBreed;

                if (!tName.empty() && tAge != 0 && !tBreed.empty())
                dogList.push_back(Dog(tName, tAge, tBreed));
                else
                throw exception();
            }
            catch(const std::exception& e)
            {
                std::cout << "Bad input in file " << filename << '\n';
                throw e;
            }
            continue;      
        }
        break;      
    }
}

Dog DogManager::oldestDog() {
    Dog oldest;
    oldest.setAge(0);

    for (int i = 0; i < dogList.size(); i++)
    {
        if (dogList[i].getAge() > oldest.getAge())
        {
            oldest = dogList[i];
        }       
    }
    return oldest;
}

void DogManager::printDogs() {
    dogTablePrinter.printDogTable(dogList);
}