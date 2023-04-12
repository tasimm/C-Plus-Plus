// Practicing with constructors and destructors

#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
    cout << "Starting program...\n";

    {
        Cat dolce;
        dolce.speak();
    }                       // enclosing the object in curly brackets to call the destructor on the object before the next cout statement

    cout << "Ending program...\n";
}
