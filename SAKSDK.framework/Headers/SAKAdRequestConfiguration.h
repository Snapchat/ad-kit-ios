
#import "SAKAdRequestLocationConfiguration.h"

#import <Foundation/Foundation.h>

@interface SAKAdRequestConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSString *publisherSlotId;
@property (nonatomic, readonly, copy) SAKAdRequestLocationConfiguration *location;

- (instancetype)initWithPublisherSlotId:(NSString *)publisherSlotId
                               location:(SAKAdRequestLocationConfiguration *)location;

@end