//
//  SimpleController.m
//  Simple Cal
//
//  Created by Shaikha Al-Khuder on 4/10/11.
//  Copyright 2011 kuwait university. All rights reserved.
//

#import "SimpleController.h"


@implementation SimpleController

- (void)Calculator:(id)sender{
    float res =[numOne intValue] +[numTwo intValue];
    [Result setIntValue:res];
}
@end
