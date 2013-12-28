//
//  SoundController.h
//  Spherotify
//
//  Created by Ghislain de Juvigny on 28/12/13.
//  Copyright (c) 2013 Orbotix Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SoundController : NSController

+(void)playVolumeSound;
+(void)volumeUp;
+(void)volumeDown;

@end
