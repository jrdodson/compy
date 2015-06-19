/*
 * PyString.h
 * Dodson, Wolfrath 2015
 */

#ifndef _COMPY_PYSTRING_H
#define _COMPY_PYSTRING_H

#include "PyTypes.h"
#include "PyBaseObj.h"
#include <ostream>
#include <string>

using std::ostream;
using std::string;


class PyString : public PyBaseObj {

public:

	PyString() : _value(string("")) {};
	PyString(string v)
	{
		_value = v;
	};
	~PyString(){};

	virtual void print(ostream& os) const{
		os << _value;
	}

private:

	string	_value;
};

#endif /* _COMPY_PYSTRING_H */
