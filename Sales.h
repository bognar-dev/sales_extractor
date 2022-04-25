//
// Created by nikla on 19/04/2022.
//

#ifndef INC_04_SALES_H
#define INC_04_SALES_H
#include "Date.h"
using namespace std;

class Sales {
public:
    Date _date = Date("11.11.1111");
    string _brand;
    int _amount_of_cars;
    Sales(Date date = Date("11.11.1111"), string brand = "----------", int amount_of_cars = 1);
    void toScreen();
    string toString();
};


#endif //INC_04_SALES_H
