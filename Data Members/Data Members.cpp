// Program that practices utilizing classes, objects and functions
// Based on my two cats, Dolce and Happy

#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
	Cat dolce;			// create object dolce from Cat class
	dolce.makeSad();
	dolce.speak();

	Cat happy;			// create object happy from Cat class
	happy.makeHappy();
	happy.speak();
}
