//
//  PluginManager.h
//  MinServer
//
//  Created by Rayer on 10/14/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#ifndef __MinServer__PluginManager__
#define __MinServer__PluginManager__

#include <Singleton.h>
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

extern Loki::SingletonHolder<PluginManager> SinglePluginManager;

#endif /* defined(__MinServer__PluginManager__) */
