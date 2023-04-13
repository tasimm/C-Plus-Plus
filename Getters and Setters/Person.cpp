#include "Person.h"

Person::Person() {						// creating a person named "George"
	name = "George";
}

string Person::toString() {				// outputs name
	return "Person's name is: " + name;
}

void Person::setName(string newName) {  // setter method that allows an object's name to be set
	name = newName;
}

string Person::getName() {				// getter method that returns name
	return name;
}
