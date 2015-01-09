//
//  NSObject+Core.h
//  Collections
//
//  Created by Tony Xiao on 3/7/13.
//  Copyright (c) 2013 Collections Labs, Inc. All rights reserved.
//

#import "Core.h"

@interface NSObject (Core)

- (id)associatedValueForKey:(const char *)key setDefault:(id)defaultValue;

// Notify multiple keypath at the same time, also block based syntax
- (void)changeValuesForKeys:(id<NSFastEnumeration>)keys;

- (void)willChangeValuesForKeys:(id<NSFastEnumeration>)keys;
- (void)didChangeValuesForKeys:(id<NSFastEnumeration>)keys;
- (void)withChangesToKeys:(id<NSFastEnumeration>)keys do:(void (^)(void))block;

// Register for notification, automatically unregister when receiver dealloc's
- (RACDisposable *)listenForNotification:(NSString *)name selector:(SEL)selector;

- (RACSignal *)listenForNotification:(NSString *)name;
- (RACSignal *)listenForNotification:(NSString *)name
                              object:(id)object;
- (RACSignal *)listenForNotification:(NSString *)name
                              object:(id)object
                  notificationCenter:(NSNotificationCenter *)notificationCenter;

- (void)CL_dumpInfo;

// TODO: Add - (instancetype)cl_delay and + (Class)cl_delay
// which return proxy objects that one can call

@end

