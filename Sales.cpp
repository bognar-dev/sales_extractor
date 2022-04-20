//
// Created by nikla on 19/04/2022.
//
#include <iostream>
#include "Sales.h"

Sales::Sales() = default;
Sales::Sales(string date, string brand, string amount_of_cars) {
    _date = date;
    _brand = brand;
    _amount_of_cars = amount_of_cars;
}

void Sales::toString() {
    cout << "\t" << "Date" << "\t" << "\t" << "Brand" << "\t" << "\t" << "Amount of cars" << '\n' <<
         "\t" << _date << "\t" << _brand << "\t" << "\t" << _amount_of_cars << '\n';
}
