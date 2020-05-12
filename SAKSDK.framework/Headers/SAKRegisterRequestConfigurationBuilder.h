#import <Foundation/Foundation.h>
#import "SAKConfigurationGenderEnum.h"

@class SAKRegisterRequestConfiguration;

@interface SAKRegisterRequestConfigurationBuilder : NSObject

+ (instancetype)registerRequestConfiguration;

+ (instancetype)registerRequestConfigurationFromExistingRegisterRequestConfiguration:(SAKRegisterRequestConfiguration *)existingRegisterRequestConfiguration;

- (SAKRegisterRequestConfiguration *)build;

- (instancetype)withSnapKitAppId:(NSString *)snapKitAppId;

- (instancetype)withPhoneNumber:(NSString *)phoneNumber;

- (instancetype)withEmailAddress:(NSString *)emailAddress;

- (instancetype)withAge:(NSInteger)age;

- (instancetype)withCategories:(NSArray<NSNumber *> *)categories;

- (instancetype)withKeywords:(NSArray<NSString *> *)keywords;

- (instancetype)withGender:(SAKConfigurationGenderType)gender;

@end

