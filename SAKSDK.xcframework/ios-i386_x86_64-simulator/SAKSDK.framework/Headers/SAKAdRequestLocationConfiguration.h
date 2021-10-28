//
//  SAKAdRequestLocationConfiguration.h
//  SAKSDKDataModels
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(10.0))
@interface SAKAdRequestLocationConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longtitude;
@property (nonatomic, readonly) NSInteger accuracyInMeters;
@property (nonatomic, readonly) NSTimeInterval locationCapturedTimestampInMillis;

- (instancetype)initWithLatitude:(double)latitude longtitude:(double)longtitude accuracyInMeters:(NSInteger)accuracyInMeters locationCapturedTimestampInMillis:(NSTimeInterval)locationCapturedTimestampInMillis;

@end

NS_ASSUME_NONNULL_END

