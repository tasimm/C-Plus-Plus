// Practice program using getters and setters. Creates a class for a person and gives them a name. Name can be overridden with setter/retrived with getter

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person person1;

    person1.setName("Georgina");                // setter overrides default name of "George" with "Georgina"

    cout << person1.toString() << endl;         // outputs name to the console      
}


