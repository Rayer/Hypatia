//
//  PlainSettingReader.h
//  Hypatia
//
//  Created by Rayer Shih on 10/26/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#ifndef __Hypatia__PlainSettingReader__
#define __Hypatia__PlainSettingReader__

#include <string>
#include <list>
#include <map>

namespace Hypatia {
    class PlainSettingReader {
        
    public:
        typedef std::map<std::string, std::list<std::string> > READER_OUTPUT;
        bool readFromFile(const std::string& path, READER_OUTPUT* output);
        bool checkFileIntegration(const std::string& path);
    };
}


#endif /* defined(__Hypatia__PlainSettingReader__) */
