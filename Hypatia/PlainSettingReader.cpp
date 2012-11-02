//
//  PlainSettingReader.cpp
//  Hypatia
//
//  Created by Rayer Shih on 10/26/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#include "PlainSettingReader.h"
#include <fstream>
#include <iostream>

using namespace std;
using namespace Hypatia;

bool PlainSettingReader::readFromFile(const std::string& path, READER_OUTPUT *output) {
    wifstream wifs;
    wifs.open(path.c_str());
    wstring buffer;
    wifs >> buffer;
    wcout << buffer << endl;
    return true;
}

bool PlainSettingReader::checkFileIntegration(const std::string& path) {
    
    
    return false;
}

