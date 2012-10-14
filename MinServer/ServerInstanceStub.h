//
//  ServerInstanceStub.h
//  MinServer
//
//  Created by Rayer Shih on 10/12/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#ifndef __MinServer__ServerInstanceStub__
#define __MinServer__ServerInstanceStub__

#include <iostream>
#include "ServerInstance.h"

class IConnectionPolicy;
class IResponsePolicy;
class IHandlePolicy;
class Configuration;

template <typename ConnectionPolicy, typename ResponsePolicy, typename HandlePolicy>
class ServerInstanceStub : public ConnectionPolicy, public ResponsePolicy, public HandlePolicy, public ServerInstance {
    ConnectionPolicy* _connectionPolicy;
    ResponsePolicy* _responsePolicy;
    HandlePolicy* _handlePolicy;
    ServerInstanceStub();
    
protected:
    IConnectionPolicy* getConnectionPolicy();
    IResponsePolicy* getResponsePolicy();
    IHandlePolicy* getHandlePolicy();
    
public:
    static ServerInstance* createFromConfiguration(Configuration& conf);
};

#endif /* defined(__MinServer__ServerInstanceStub__) */
