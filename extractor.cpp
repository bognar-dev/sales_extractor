//
// Created by nikla on 19/04/2022.
//
#include <iostream>
#include <string>
#include "extractor.h"
using namespace std;
FileExtractor::FileExtractor(string filename,Date datum){
_filename = filename;
_datum = datum;
file.open(_filename);
if(!file) {
cerr << "could not open the file" << endl;
return;
}
}
List FileExtractor::extract() {
    string word;
    string info[3];
    int first_run = 0;
    int i=0;
    while (!file.eof()) {
        if(i > 2){
            if(first_run != 0) {
                info[0].erase(0, 1);
            }
            if(info[0] == _datum.toDigits()) {
                int amount_of_cars = stoi(info[2]);
                Date date(info[0],"yyyymmdd");
                Sales s(date, info[1], amount_of_cars);
                _liste.append(s);
            }
            i = 0;
            first_run = 1;
        }
        getline(file, word,',');
        info[i] = word;
        i++;
        /*if(date == _datum){
            Sales s(date,brand,amount);
            s.toString();
            _liste.append(s);
        }*/
    }
    return _liste;
}
FileExtractor::~FileExtractor(){
    file.close();
}