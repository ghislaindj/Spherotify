//
//  AppDelegate.h
//  SensorStreaming
//
//  Created by Michael DePhillips on 6/21/12.
//  Copyright (c) 2012 Orbotix Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    BOOL robotOnline;
    BOOL dataStreamingOn;
    int  packetCount;
    int screenWidth;
    int screenHeight;
    
    IBOutlet NSButton *toggleControllerButton;
    
    BOOL isControllingMouse;
    BOOL isMouseLeftDown;
    BOOL isMouseRightDown;
    int mousePositionX;
    int mousePositionY;
}

@property (assign) IBOutlet NSTextField *accelXField;
@property (assign) IBOutlet NSTextField *accelYField;
@property (assign) IBOutlet NSTextField *accelZField;


@property (assign) IBOutlet NSTextField *gyroRollField;
@property (assign) IBOutlet NSTextField *gyroPitchField;
@property (assign) IBOutlet NSTextField *gyroYawField;

@property (assign) IBOutlet NSWindow *window;

-(IBAction)toggleMouseControllerPressed:(id)sender;
-(void)setupRobotConnection;
-(void)handleRobotOnline;

@end
