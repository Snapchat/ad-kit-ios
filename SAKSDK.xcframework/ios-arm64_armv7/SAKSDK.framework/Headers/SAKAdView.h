//
//  SAKAdView.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
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

@property (nonatomic, readonly) UIViewController *rootViewController;

- (void)adViewDidLoad:(SAKAdView *)adView;

- (void)adView:(SAKAdView *)adView didFailWithError:(NSError *)error;

- (void)adViewDidClick:(SAKAdView *)adView;

- (void)adViewDidTrackImpression:(SAKAdView *)adView;

@end

API_AVAILABLE(ios(10.0))
@interface SAKAdView : UIView

@property (nonatomic, weak, nullable) id<SAKAdViewDelegate> delegate;
@property (nonatomic, weak, nullable)
    UIViewController *rootViewController DEPRECATED_MSG_ATTRIBUTE("Use rootViewController delegate property instead");

- (instancetype)initWithFormat:(SAKAdViewFormat)adViewFormat;

- (void)loadRequest:(nullable SAKAdRequestConfiguration *)configuration;

/// Load ad from a bid payload from a server side bid
/// @param bidPayload ad payload to be rendered by the receiver
/// @param publisherSlotId optional slot ID
- (void)loadAdWithBidPayload:(NSData *)bidPayload publisherSlotId:(nullable NSString *)publisherSlotId;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
