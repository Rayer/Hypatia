//
//  PluginManager.h
//  Hypatia
//
//  Created by Rayer on 10/14/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#ifndef __Hypatia__PluginManager__
#define __Hypatia__PluginManager__

#include <vector>

class PluginHolder;
class PluginInfo;

class PluginManager {
    std::vector<PluginHolder*> _pluginHolderList;
public:
    bool registerPlugin();
    bool removePlugin();
    
    int getPluginCount();
    const PluginInfo* getPluginInfo(int index);
    
};


#endif /* defined(__Hypatia__PluginManager__) */
