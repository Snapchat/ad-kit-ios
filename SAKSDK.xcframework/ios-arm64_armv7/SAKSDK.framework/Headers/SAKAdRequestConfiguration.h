//
//  SAKAdRequestConfiguration.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SAKAdRequestLocationConfiguration.h"

API_AVAILABLE(ios(10.0))
@interface SAKAdRequestConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly, copy, nullable) NSString *publisherSlotId;
@property (nonatomic, readonly, copy, nullable) SAKAdRequestLocationConfiguration *location;

- (instancetype)initWithPublisherSlotId:(nullable NSString *)publisherSlotId location:(nullable SAKAdRequestLocationConfiguration *)location;

@end

