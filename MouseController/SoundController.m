//
//  SoundController.m
//  Spherotify
//
//  Created by Ghislain de Juvigny on 28/12/13.
//  Copyright (c) 2013 Orbotix Inc. All rights reserved.
//

#import "SoundController.h"

@implementation SoundController

+(void)playVolumeSound
{
	NSSound *vol = [[NSSound alloc] initWithContentsOfFile:@"/System/Library/LoginPlugins/BezelServices.loginPlugin/Contents/Resources/volume.aiff" byReference:YES];
	[vol play];
	[vol autorelease];
}

+(void)volumeUp
{
	NSAppleScript *as = [[NSAppleScript alloc] initWithSource:@"\nset curVolume to output volume of (get volume settings)\nif curVolume < 90 then\nset newVolume to curVolume + 10\nelse\nset newVolume to 100\nend if\nset volume output volume newVolume\nset volume output muted false\n"];
	[as performSelectorOnMainThread:@selector(executeAndReturnError:) withObject:nil waitUntilDone:NO];
	[as release];
	//[SoundController playVolumeSound];
}

+(void)volumeDown
{
	NSAppleScript *as = [[NSAppleScript alloc] initWithSource:@"\nset curVolume to output volume of (get volume settings)\nif curVolume > 10 then\nset newVolume to curVolume - 10\nset volume output volume newVolume\nelse\nset newVolume to 1\nset volume output volume newVolume\nset volume output muted true\nend if\n"];
	[as performSelectorOnMainThread:@selector(executeAndReturnError:) withObject:nil waitUntilDone:NO];
	[as release];
	//[SoundController playVolumeSound];
}

@end