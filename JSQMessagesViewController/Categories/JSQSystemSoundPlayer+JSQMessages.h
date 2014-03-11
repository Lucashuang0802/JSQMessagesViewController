//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSMessagesViewController
//
//
//  The MIT License
//  Copyright (c) 2014 Jesse Squires
//  http://opensource.org/licenses/MIT
//

#import "JSQSystemSoundPlayer.h"

@interface JSQSystemSoundPlayer (JSQMessages)

/**
 *  Plays the default sound for received messages.
 */
+ (void)jsq_playMessageReceivedSound;

/**
 *  Plays the default sound for received messages *as an alert*, invoking device vibration if available.
 */
+ (void)jsq_playMessageReceivedAlert;

/**
 *  Plays the default sound for sent messages.
 */
+ (void)jsq_playMessageSentSound;

/**
 *  Plays the default sound for sent messages *as an alert*, invoking device vibration if available.
 */
+ (void)jsq_playMessageSentAlert;

@end
