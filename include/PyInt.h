/*
 * PyInt.h
 * Dodson, Wolfrath 2015
 */

#ifndef _COMPY_PYINT_H
#define _COMPY_PYINT_H

#include "PyTypes.h"
#include "PyBaseObj.h"
#include <ostream>

using std::ostream;


class PyInt : public PyBaseObj {

public:

	PyInt() : _value(0) {};
	PyInt(int64_t v) : _value(v) {};
	~PyInt(){};

	virtual void print(ostream& os) const{
		os << _value;
	}

private:

	int64_t	_value;
};

#endif /* _COMPY_PYINT_H */
