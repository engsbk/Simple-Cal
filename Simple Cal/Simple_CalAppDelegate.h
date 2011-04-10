//
//  Simple_CalAppDelegate.h
//  Simple Cal
//
//  Created by Shaikha Al-Khuder on 4/10/11.
//  Copyright 2011 kuwait university. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Simple_CalAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
