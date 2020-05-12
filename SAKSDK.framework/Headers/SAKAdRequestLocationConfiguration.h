
#import <Foundation/Foundation.h>

@interface SAKAdRequestLocationConfiguration : NSObject <NSCopying>

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longtitude;
@property (nonatomic, readonly) NSInteger accuracyInMeters;
@property (nonatomic, readonly) NSTimeInterval locationCapturedTimestampInMillis;

- (instancetype)initWithLatitude:(double)latitude
                           longtitude:(double)longtitude
                     accuracyInMeters:(NSInteger)accuracyInMeters
    locationCapturedTimestampInMillis:(NSTimeInterval)locationCapturedTimestampInMillis;

@end
