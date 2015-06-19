/*
 * PyBaseObj.h
 * Dodson, Wolfrath 2015
 */


#ifndef _COMPY_PYBASEOBJ_H
#define _COMPY_PYBASEOBJ_H

#include <ostream>

using std::ostream;

//
// Base class from which all other classes are derived 
//

class PyBaseObj {

public:

	virtual void print(ostream& os) const
	{
		os << "PyBaseObj";
	};
};

extern ostream& operator<<(ostream&, const PyBaseObj&);

#endif /* _COMPY_PYBASEOBJ_H */
