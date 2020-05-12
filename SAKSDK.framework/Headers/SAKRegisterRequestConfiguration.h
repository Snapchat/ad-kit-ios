
#import <Foundation/Foundation.h>
#import "SAKConfigurationGenderEnum.h"

@interface SAKRegisterRequestConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSString *snapKitAppId;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly) NSInteger age;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> *categories;
@property (nonatomic, readonly, copy) NSArray<NSString *> *keywords;
@property (nonatomic, readonly) SAKConfigurationGenderType gender;

- (instancetype)initWithSnapKitAppId:(NSString *)snapKitAppId phoneNumber:(NSString *)phoneNumber emailAddress:(NSString *)emailAddress age:(NSInteger)age categories:(NSArray<NSNumber *> *)categories keywords:(NSArray<NSString *> *)keywords gender:(SAKConfigurationGenderType)gender;

@end

