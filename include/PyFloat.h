/*
 * PyFloat.h
 * Dodson, Wolfrath 2015
 */

#ifndef _COMPY_PYFLOAT_H
#define _COMPY_PYFLOAT_H

#include "PyTypes.h"
#include "PyBaseObj.h"
#include <ostream>

using std::ostream;


class PyFloat : public PyBaseObj {

public:

	PyFloat() : _value(0.0) {};
	PyFloat(double v) : _value(v) {};
	~PyFloat(){};

	virtual void print(ostream& os) const{
		os << _value;
	}

private:

	double	_value;
};

#endif /* _COMPY_PYFLOAT_H */
