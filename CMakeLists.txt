cmake_minimum_required (VERSION 2.6)
 
project(Hypatia)

SET(SOURCE
Hypatia/IServerFactory.cpp

Hypatia/PlainSettingReader.cpp

Hypatia/PluginHandler.cpp 
Hypatia/PluginManager.cpp 
Hypatia/ServerConfiguration.cpp

Hypatia/ServerInstance.cpp 
Hypatia/ServerInstanceStub.cpp

Hypatia/ServerManager.cpp 
Hypatia/main.cpp

)

SET(HEADERS
Hypatia/IServerFactory.h

Hypatia/PlainSettingReader.h

Hypatia/PluginHandler.h

Hypatia/PluginManager.h

Hypatia/ServerConfiguration.h

Hypatia/ServerInstance.h

Hypatia/ServerInstanceStub.h

Hypatia/ServerManager.h

)

ADD_EXECUTABLE(Hypatia ${SOURCE} ${HEADERS})

