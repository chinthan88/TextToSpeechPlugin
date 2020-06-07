//
//  TextToSpeechPlugin.h
//  SpeechApp
//
//  Created by Chinthan on 06/06/20.
//  Copyright © 2020 Chinthan. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import <Cordova/CDV.h>


@interface TextToSpeechPlugin : CDVPlugin <AVSpeechSynthesizerDelegate>  {
    AVSpeechSynthesizer* synthesizer;
    NSString* lastCallbackId;
    NSString* callbackId;
}

- (void)speak:(CDVInvokedUrlCommand*)command;
- (void)stop:(CDVInvokedUrlCommand*)command;
- (void)checkLanguage:(CDVInvokedUrlCommand*)command;

@end

