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
#include "Date.h"
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
    string word;
    string info[3];
    int first_run = 0;
    int i=0;
    while (!file.eof()) {
        if(i > 2){
            if(first_run != 0) {
                info[0].erase(0, 1);
            }
            if(info[0] == _datum) {
                Sales s(info[0], info[1], info[2]);
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