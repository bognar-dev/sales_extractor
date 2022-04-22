//
// Created by nikla on 19/04/2022.
//

#ifndef INC_04_EXTRACTOR_H
#define INC_04_EXTRACTOR_H
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "list.h"
#include "Sales.h"
#include "Date.h"
using namespace std;

class FileExtractor{
private:
    List _liste;
    ifstream file;
    string _filename;
    Date _datum = Date("00.00.0000");
public:
    FileExtractor(string filename,Date datum);
    List extract();
    ~FileExtractor();
};


#endif //INC_04_EXTRACTOR_H
