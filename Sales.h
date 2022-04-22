//
// Created by nikla on 19/04/2022.
//

#ifndef INC_04_SALES_H
#define INC_04_SALES_H
#include "Date.h"
using namespace std;

class Sales {
public:
    Date _date= Date("00.00.0000");
    string _brand;
    int _amount_of_cars;
    Sales(Date date, string brand, int amount_of_cars);
    void toScreen();
    string toString();
};


#endif //INC_04_SALES_H
