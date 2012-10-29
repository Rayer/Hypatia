//
//  ServerManager.h
//  Hypatia
//
//  Created by Rayer Shih on 10/12/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#ifndef __Hypatia__ServerManager__
#define __Hypatia__ServerManager__

#include <vector>
#include <string>
#include <list>
#include "PluginHandler.h"



namespace Hypatia {
    
    /**
     Configure source can be anything, database, file, or anything which supports IConfigure interface.
     
     But, we just use fixed configuration columns will be ok.
     
     ServerManager config :
     name, createTimestamp, lastUpdateTimestamp, LogFactory
     
     Server config :
     name, createTimestamp, lastUpdateTimestamp, LogFactory, UUID(if it is null, will create new one for it), ServerDescription, ServerReservePortArray.
     
     */
    
    //TODO : merge these 2 config as one? supposed not.
    struct ManagerConfig {
        std::string     name;
        long            createTimestamp;
        long            lastUpdateTimestamp;
        std::string     logFactory;
    };
    
    struct ServerConfig {
        std::string     UUID;
        std::string     name;
        long            createTimestamp;
        long            lastUpdateTimestamp;
        std::string     logFactory;
        std::string     description;
        std::list<int>  reservedPortList;
    };
    
    class ManagerConfigFactory {
        
    };
    
    class ServerConfigFactory {
        static const ServerConfig& createFromFile(const FILE* file);
        
    };
    
    static const std::string SERVER_CONFIG_DEF_NAME = "ServerConfig.xml";
    
    class PluginConfigurate;
    
    class ServerManager {
    private:
        std::vector<PluginHandler*> _pluginList;
        
        std::string _pluginConfSearchPath;
        std::string _pluginRuntimeSearchPath;
        
    protected:
        bool loadServerManagerConfig(const std::string& configFile = SERVER_CONFIG_DEF_NAME);
        
    public:
        
        bool loadConfigurate(PluginConfigurate* conf);
        bool loadConfigurateFile(std::string& path);
        
    };
    

}



#endif /* defined(__Hypatia__ServerManager__) */
