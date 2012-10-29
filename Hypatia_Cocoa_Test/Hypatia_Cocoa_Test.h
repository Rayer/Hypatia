//
//  Hypatia_Cocoa_Test.h
//  Hypatia_Cocoa_Test
//
//  Created by Rayer on 10/27/12.
//  Copyright (c) 2012 Digital Resolve. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>

struct Opaque;

@interface Hypatia_Cocoa_Test : SenTestCase {
    struct Opaque* _opaque;
}
@end
