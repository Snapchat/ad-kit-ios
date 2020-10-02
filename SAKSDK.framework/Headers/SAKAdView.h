//
//  SAKAdView.h
//  SAKSDK
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKAdView;
@class SAKAdRequestConfiguration;

typedef NS_ENUM(NSUInteger, SAKAdViewFormat) {
    // 320x50
    SAKAdViewFormatBanner,
    // 300x250
    SAKAdViewFormatMediumRectangle,
};

@protocol SAKAdViewDelegate <NSObject>

- (void)adViewDidLoad:(SAKAdView *)adView;

- (void)adView:(SAKAdView *)adView didFailWithError:(NSError *)error;

- (void)adViewDidClick:(SAKAdView *)adView;

- (void)adViewDidTrackImpression:(SAKAdView *)adView;

@end

API_AVAILABLE(ios(10.0))
@interface SAKAdView : UIView

@property (nonatomic, weak, nullable) id<SAKAdViewDelegate> delegate;
@property (nonatomic, weak, nullable) UIViewController *rootViewController;

- (instancetype)initWithFormat:(SAKAdViewFormat)adViewFormat;

- (void)loadRequest:(nullable SAKAdRequestConfiguration *)configuration;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
