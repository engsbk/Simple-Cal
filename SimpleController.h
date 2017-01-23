//
//  SimpleController.h
//  Simple Cal
//
//  Created by Shaikha Al-Khuder on 4/10/11.
//  Copyright 2011 kuwait university. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SimpleController : NSObject {
@private
    
    IBOutlet NSTextField  *numOne;
    IBOutlet NSTextField  *numTwo;
    IBOutlet NSTextField  *Result;
    
}

- (IBAction) Calculator :(id) sender;

@end
