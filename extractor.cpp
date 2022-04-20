//
// Created by nikla on 19/04/2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <utility>
#include "extractor.h"
#include "list.h"
#include "Sales.h"
using namespace std;
FileExtractor::FileExtractor(string filename,string datum){
_filename = filename;
_datum = datum;
file.open(_filename);
if(!file) {
cerr << "could not open the file" << endl;
return;
}else{
cout<<"success"<<endl;
}
}
List FileExtractor::extract() {
    string line;
    string date;
    string brand;
    string amount;
    int i = 0;
    int j;
    while (!file.eof()) {
        getline(file, line);
        for (; i != ' '; i++) {
            date += line[i];
        }
        for (j = i+1; j != ' '; j++) {
            brand += line[i];
        }
        for (int k = j +1; k !='\n' ; k++) {
            amount += line[i];
        }
        if(date == _datum){
            Sales s(date,brand,amount);
            s.toString();
            _liste.append(s);
        }
    }
    return _liste;
}
FileExtractor::~FileExtractor(){
    file.close();
}