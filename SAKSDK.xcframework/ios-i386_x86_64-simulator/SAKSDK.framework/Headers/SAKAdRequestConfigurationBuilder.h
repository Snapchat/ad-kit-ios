//
//  SAKAdRequestConfigurationBuilder.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SAKAdRequestLocationConfiguration.h"

@class SAKAdRequestConfiguration;
@class SAKAdRequestLocationConfiguration;

API_AVAILABLE(ios(10.0))
@interface SAKAdRequestConfigurationBuilder : NSObject

+ (instancetype)adRequestConfiguration;

+ (instancetype)adRequestConfigurationFromExistingAdRequestConfiguration:(SAKAdRequestConfiguration *)existingAdRequestConfiguration;

- (SAKAdRequestConfiguration *)build;

- (instancetype)withPublisherSlotId:(nullable NSString *)publisherSlotId;

- (instancetype)withLocation:(nullable SAKAdRequestLocationConfiguration *)location;

@end

