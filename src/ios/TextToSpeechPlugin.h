//
//  TextToSpeechPlugin.h
//  SpeechApp
//
//  Created by Chinthan on 06/06/20.
//  Copyright © 2020 Chinthan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface TextToSpeechPlugin : CDVPlugin <AVSpeechSynthesizerDelegate>  {
    AVSpeechSynthesizer* synthesizer;
    NSString* lastCallbackId;
    NSString* callbackId;
}

- (void)speak:(CDVInvokedUrlCommand*)command;
- (void)stop:(CDVInvokedUrlCommand*)command;
- (void)checkLanguage:(CDVInvokedUrlCommand*)command;

@end

