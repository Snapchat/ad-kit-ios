/**
 * This file is generated using the remodel generation script.
 * The name of the input file is SAKAdRequestConfiguration.value
 */

#import "SAKAdRequestLocationConfiguration.h"

#import <Foundation/Foundation.h>

API_AVAILABLE(ios(10.0))
@interface SAKAdRequestConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSString *publisherSlotId;
@property (nonatomic, readonly, copy) SAKAdRequestLocationConfiguration *location;

- (instancetype)initWithPublisherSlotId:(NSString *)publisherSlotId
                               location:(SAKAdRequestLocationConfiguration *)location;

@end
