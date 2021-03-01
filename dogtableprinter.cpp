#include <string>
#include <iostream>
#include <vector>
#include "dog.h"
#include "dogtableprinter.h"

void DogTablePrinter::printDogTable(vector<Dog> dogList) {
    cout << "Name\tAge\tBreed\n===========================\n";
    for (int i = 0; i < dogList.size(); i++)
    {
        cout << dogList[i].getName() << "\t" << dogList[i].getAge() << "\t" << dogList[i].getBreed() << "\t" << endl;
    }
    
}