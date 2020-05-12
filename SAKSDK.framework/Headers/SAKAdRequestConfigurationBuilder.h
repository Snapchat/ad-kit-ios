
#import "SAKAdRequestLocationConfiguration.h"

#import <Foundation/Foundation.h>

@class SAKAdRequestConfiguration;
@class SAKAdRequestLocationConfiguration;

@interface SAKAdRequestConfigurationBuilder : NSObject

+ (instancetype)adRequestConfiguration;

+ (instancetype)adRequestConfigurationFromExistingAdRequestConfiguration:
    (SAKAdRequestConfiguration *)existingAdRequestConfiguration;

- (SAKAdRequestConfiguration *)build;

- (instancetype)withPublisherSlotId:(NSString *)publisherSlotId;

- (instancetype)withLocation:(SAKAdRequestLocationConfiguration *)location;

@end
