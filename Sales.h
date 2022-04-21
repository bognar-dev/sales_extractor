//
// Created by nikla on 19/04/2022.
//

#ifndef INC_04_SALES_H
#define INC_04_SALES_H
using namespace std;

class Sales {
public:
    string _date,_brand;
    string _amount_of_cars;
    Sales();
    Sales(string date,string brand, string amount_of_cars);
    void toScreen();
    string toString();
};


#endif //INC_04_SALES_H
