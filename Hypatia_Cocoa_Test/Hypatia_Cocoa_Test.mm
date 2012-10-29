//
//  Hypatia_Cocoa_Test.mm
//  Hypatia_Cocoa_Test
//
//  Created by Rayer on 10/27/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#import "Hypatia_Cocoa_Test.h"

@implementation Hypatia_Cocoa_Test
#include "PlainSettingReader.h"

struct Opaque {
    Hypatia::PlainSettingReader* _testReader;
    
    Opaque() {
        _testReader = new Hypatia::PlainSettingReader;
    }
    
    ~Opaque() {
        delete _testReader;
    }
};

- (void)setUp
{
    [super setUp];
    _opaque = new Opaque;
    
    
    // Set-up code here.
}

- (void)tearDown
{
    delete _opaque;
    // Tear-down code here.
    
    [super tearDown];
}

-(void)testReader
{
    //STFail(@"running testReader");
    Hypatia::PlainSettingReader::READER_OUTPUT output;
    STAssertEquals(true, _opaque->_testReader->readFromFile("TEST_PATH", &output), @"Test1");
}
//- (void)testExample
//{
//    STFail(@"Unit tests are not implemented yet in Hypatia_Cocoa_Test");
//    
//}

@end
