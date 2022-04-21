# include <iostream> // neue Bibliothek
# include "list.h"
#include "Sales.h"

using namespace std; // nutze Namensraum
List::List(int size) {
    _size = size;
    _next = 0;
    _error = 0;
    _values = new Sales[size];
}

List::~ List() {
    delete[] _values; // statt free
}

void List::increase() {
    Sales *tmp = new Sales[_size * 2];
    for (int i = 0; i < _size; i++)
        tmp[i] = _values[i];
    delete[] _values;
    _values = tmp;
    _size *= 2;
}

void List::append(Sales val) {
    if (isFull())
        increase();
    _values[_next] = val;
    _next += 1;
}

Sales List::getValueAt(int pos) {
    if (pos < 0 || pos >= _next) {
        _error = 1;
    }
    return _values[pos];
}

int List::find(Sales val) {
    int pos;
    for (pos = 0; pos < _next; pos++)
        if (_values[pos]._date == val._date)
            return pos;
    return -1;
}

bool List::isFull() {
    return _next == _size;
}

void List::decrease() {
    _size /= 2;
    Sales *tmp = new Sales[_size];
    for (int i = 0; i < _next; i++)
        tmp[i] = _values[i];
    delete[] _values;
    _values = tmp;
}

void List::erase(Sales val) {
    int pos = find(val);
    if (pos == -1)
        return;
    for (; pos < _next - 1; pos++)
        _values[pos] = _values[pos + 1];
    _next -= 1;
    if (_next < _size / 4)
        decrease();
}


char List::getError() {
    return _error;
}


