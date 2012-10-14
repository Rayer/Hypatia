//
//  main.cpp
//  MinServer
//
//  Created by Rayer Shih on 10/11/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <string>

#define BUFSIZE 8096

struct {
    std::string ext;
    std::string filetype;
} extensions [] = {
    {"gif", "image/gif" },
    {"jpg", "image/jpeg"},
    {"jpeg","image/jpeg"},
    {"png", "image/png" },
    {"zip", "image/zip" },
    {"gz",  "image/gz"  },
    {"tar", "image/tar" },
    {"htm", "text/html" },
    {"html","text/html" },
    {"exe","text/plain" },
    {'\0','\0'} };




class FSCore {
private:
protected:
public:
    class Configuration {
    public:
        int _listeningPort;
        int _bufferSize;
    };
    
    Configuration _conf;
    
    void bootstrap(FSCore::Configuration conf);
    void handle_socket(int fd);
    
    //reaction interfaces
    void onStartListening();
    void onAccept();
    void onEndSession();
    
};

void FSCore::bootstrap(FSCore::Configuration conf) {
    
}

void FSCore::handle_socket(int fd) {
    
    //new once while handle socket? not cool...
    char* buffer = new char[_conf._bufferSize];
    int ret = read(fd, &buffer, _conf._bufferSize);
    if(ret == 0 || ret == -1) {
        //handle network error.
        exit(3);
    }
    
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

