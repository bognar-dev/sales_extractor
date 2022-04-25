//
// Created by nikla on 21/04/2022.
//

#include "Date.h"
#include <sstream>
#include <iomanip>

Date::Date(string dat,string mode) {
    if(mode == "dd.mm.yyyy") {
        istringstream _is(dat);
        char _t;
        _is >> _day;
        _is >> _t;
        _is >> _month;
        _is >> _t;
        _is >> _year;
    }
    if(mode == "yyyymmdd"){
        _year = stoi(dat.substr(0,4));
        _month = stoi(dat.substr(5,1));
        _day = stoi(dat.substr(7,1));
    }
}

string Date::toString () {
    ostringstream os;
    os << setfill ('0') << setw (2) << _day << "." ;
    os << setw (2) << _month << "." << setw (4) << _year ;
    return os.str();
}

string Date::toDigits() {
    ostringstream os;
    os << setfill ('0') << setw (4) << _year;
    os << setw (2) << _month << setw (2) << _day ;
    return os.str();
}
