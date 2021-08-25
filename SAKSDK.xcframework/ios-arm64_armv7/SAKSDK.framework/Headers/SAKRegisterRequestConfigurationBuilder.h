//
//  SAKRegisterRequestConfigurationBuilder.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SAKConfigurationGenderEnum.h"

@class SAKRegisterRequestConfiguration;

API_AVAILABLE(ios(10.0))
@interface SAKRegisterRequestConfigurationBuilder : NSObject

+ (instancetype)registerRequestConfiguration;

+ (instancetype)registerRequestConfigurationFromExistingRegisterRequestConfiguration:(SAKRegisterRequestConfiguration *)existingRegisterRequestConfiguration;

- (SAKRegisterRequestConfiguration *)build;

- (instancetype)withSnapKitAppId:(nonnull NSString *)snapKitAppId;

- (instancetype)withPhoneNumber:(nullable NSString *)phoneNumber;

- (instancetype)withEmailAddress:(nullable NSString *)emailAddress;

- (instancetype)withAge:(NSInteger)age;

- (instancetype)withCategories:(nullable NSArray<NSNumber *> *)categories;

- (instancetype)withKeywords:(nullable NSArray<NSString *> *)keywords;

- (instancetype)withGender:(SAKConfigurationGenderType)gender;

- (instancetype)withCrashReportingDisabled:(BOOL)crashReportingDisabled;

- (instancetype)withTestModeEnabled:(BOOL)testModeEnabled;

@end

