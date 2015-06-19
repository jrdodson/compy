/*
 * PyBaseObj.cpp
 * Dodson, Wolfrath 2015
 */

#include "PyBaseObj.h"

extern ostream& operator<<(ostream& os, const PyBaseObj& obj){

	obj.print(os);
	return os;
}
