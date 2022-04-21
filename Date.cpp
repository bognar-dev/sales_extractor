//
// Created by nikla on 21/04/2022.
//

#include "Date.h"
#include <sstream>
#include <iomanip>

Date::Date(string dat) {
    istringstream _is(dat);
    char _t;
    _is >> _day ;
    _is >> _t;
    _is >> _month ;
    _is >> _t;
    _is >> _year ;

}

string Date::toString () {
    ostringstream os;
    os << setfill ('0') << setw (2) << _day << "." ;
    os << setw (2) << _month << "." << setw (4) << _year ;
    return os.str();
}
