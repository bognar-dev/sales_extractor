#include <iostream>
#include <iomanip>
#include "list.h"
#include "Sales.h"
#include "extractor.h"
int main() {
    string file = "sales.dat";
    string date = "20220105";
    FileExtractor f(file,date);
    List l = f.extract();
    cout <<setw(12) << "date" <<setw(12)<< "brand" <<setw(16)<< "amount of cars" << endl;
    for (int i = 0; i < 10; i++) {
        l.getValueAt(i).toScreen();
    }
return 0;
}
