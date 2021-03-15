//
//  SAKRegisterRequestConfiguration.h
//  SAKSDK
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SAKConfigurationGenderEnum.h"

/**
 * AdKit configuration
 */
API_AVAILABLE(ios(10.0))
@interface SAKRegisterRequestConfiguration : NSObject <NSCopying>

/**
 * App ID generated via Snap Kit portal. Required
 */
@property (nonatomic, readonly, copy, nonnull) NSString *snapKitAppId;
/**
 * App Store ID of the app. Required
 */
@property (nonatomic, readonly) NSUInteger appStoreAppId;
/**
 * Phone Number of the user
 */
@property (nonatomic, readonly, copy, nullable) NSString *phoneNumber;
/**
 * Email of the user
 */
@property (nonatomic, readonly, copy, nullable) NSString *emailAddress;
/**
 * Age of the user
 */
@property (nonatomic, readonly) NSInteger age;
/**
 * Snapchat Lifestyle Categories targeting options that fit the user
 */
@property (nonatomic, readonly, copy, nullable) NSArray<NSNumber *> *categories;
/**
 * Free form strings that categorize or describe the user
 */
@property (nonatomic, readonly, copy, nullable) NSArray<NSString *> *keywords;
/**
 * Gender of the user
 */
@property (nonatomic, readonly) SAKConfigurationGenderType gender;

- (instancetype)initWithSnapKitAppId:(nonnull NSString *)snapKitAppId appStoreAppId:(NSUInteger)appStoreAppId phoneNumber:(nullable NSString *)phoneNumber emailAddress:(nullable NSString *)emailAddress age:(NSInteger)age categories:(nullable NSArray<NSNumber *> *)categories keywords:(nullable NSArray<NSString *> *)keywords gender:(SAKConfigurationGenderType)gender;

@end

