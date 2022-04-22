#include <iostream>
#include <iomanip>
#include "list.h"
#include "Sales.h"
#include "extractor.h"
#include "Date.h"
int main() {
    string file = "sales.dat";
    string indate;
    cout<<"Please give a date you want to search for (DD.MM.YYYY):"<<endl;
    cin>>indate;
    Date date(indate);
    FileExtractor f(file,date);
    List l = f.extract();
    cout <<setw(12) << "date" <<setw(12)<< "brand" <<setw(16)<< "amount of cars" << endl;
    for (int i = 0; i < 10; i++) {
        l.getValueAt(i).toScreen();
    }
return 0;
}

//TODO: make output and list to Date type
