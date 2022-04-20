#include <iostream>
#include "list.h"
#include "Sales.h"
#include "extractor.h"
int main() {
    string file = "sales.dat";
    string date = "20220105";
    FileExtractor f(file,date);
    List l = f.extract();
    l.getValueAt(0);

    return 0;
}
