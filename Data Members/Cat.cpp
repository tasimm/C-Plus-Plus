#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {				// if cat is happy, it will meow. otherwise, it will hiss
	if (happy) {
		cout << "Meow!\n";
	}
	else {
		cout << "Hiss!\n";
	}
}

void Cat::makeHappy() {			// function to set the cat's mood to happy
	happy = true;
}

void Cat::makeSad() {			// function to set the cat's mood to sad
	happy = false;
}
