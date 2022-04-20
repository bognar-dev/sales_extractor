//
// Created by nikla on 19/04/2022.
//

#ifndef LIST_H
#define LIST_H
#include "Sales.h"
class List {
private :
    int _size, _next; // intern nutzbar
    Sales *_values;
    char _error;

    bool isFull(); // neuer Datentyp
    int find(Sales value);

    void increase();

    void decrease();

public :
    List();
    List(int size);
    ~ List(); // Destruktor statt destroy
    void append(Sales val);

    Sales getValueAt(int pos);

    void erase(Sales val);

    char getError();
};

#endif
