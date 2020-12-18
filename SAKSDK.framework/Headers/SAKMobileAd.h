//
//  SAKMobileAd.h
//  SAKSDK
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKRegisterRequestConfiguration;

typedef void (^SAKInitializationCompletionHandler)(BOOL success, NSError *_Nullable error);

API_AVAILABLE(ios(10.0))
@interface SAKMobileAd : NSObject

+ (SAKMobileAd *)shared;

@property (nonatomic, assign, readonly) BOOL initialized;

@property (nonatomic, assign) BOOL debug;

@property (nonatomic, assign) BOOL silentModeAudioEnabled;

- (void)startWithConfiguration:(SAKRegisterRequestConfiguration *)configuration
                    completion:(nullable SAKInitializationCompletionHandler)completion;

- (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
