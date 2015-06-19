/*
 * main.cpp
 * Dodson, Wolfrath 2015
 */

#include "PyTypes.h"
#include "PyInt.h"
#include "PyFloat.h"
#include "PyString.h"
#include <iostream>


int main(int argc, char* argv[]){

	// test object creation

	PyInt pint(42);
	std::cout << pint << std::endl;

	PyFloat pfloat(42.0);
	std::cout << pfloat << std::endl;

	PyString pstring("42");
	std::cout << pstring << std::endl;

	return 0;
}
