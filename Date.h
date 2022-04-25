//
// Created by nikla on 21/04/2022.
//

#ifndef INC_04_DATE_H
#define INC_04_DATE_H
#include <sstream>

using namespace std;
class Date {
public:
    int _day,_month,_year;
    Date(string dat,string mode = "dd.mm.yyyy");
    string toString();
    string toDigits();
};


#endif //INC_04_DATE_H
