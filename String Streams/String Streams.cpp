// Practice using string streams to output a string and int together

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string name = "Bob";
    int age = 32;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    cout << ss.str() << endl;   // outputs "Name is: Bob; Age is: 32"
}
