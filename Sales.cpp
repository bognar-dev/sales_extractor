//
// Created by nikla on 19/04/2022.
//
#include <iostream>
#include <iomanip>
#include "Sales.h"

Sales::Sales() = default;
Sales::Sales(string date, string brand, string amount_of_cars) {
    _date = date;
    _brand = brand;
    _amount_of_cars = amount_of_cars;
}

void Sales::toScreen() {
    cout <<setw(12) <<_date<<setw(12) << _brand<<setw(16)  << _amount_of_cars << endl;
}

string Sales::toString () {

}
