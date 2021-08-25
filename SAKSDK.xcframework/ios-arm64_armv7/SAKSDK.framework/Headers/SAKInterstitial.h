//
//  SAKInterstitial.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKInterstitial;
@class SAKAdRequestConfiguration;

@protocol SAKInterstitialDelegate <NSObject>

- (void)interstitialDidLoad:(SAKInterstitial *)ad;

- (void)interstitial:(SAKInterstitial *)ad didFailWithError:(NSError *)error;

- (void)interstitialDidExpire:(SAKInterstitial *)ad;

- (void)interstitialWillAppear:(SAKInterstitial *)ad;

- (void)interstitialDidAppear:(SAKInterstitial *)ad;

- (void)interstitialWillDisappear:(SAKInterstitial *)ad;

- (void)interstitialDidDisappear:(SAKInterstitial *)ad;

- (void)interstitialDidShowAttachment:(SAKInterstitial *)ad;

- (void)interstitialDidTrackImpression:(SAKInterstitial *)ad;

@end

API_AVAILABLE(ios(10.0))
@interface SAKInterstitial : NSObject

@property (nonatomic, weak, readwrite, nullable) id<SAKInterstitialDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL isReady;

- (void)loadRequest:(nullable SAKAdRequestConfiguration *)configuration;

/// Load ad from a bid payload from a server side bid
/// @param bidPayload ad payload to be rendered by the receiver
/// @param publisherSlotId optional slot ID
- (void)loadAdWithBidPayload:(NSData *)bidPayload publisherSlotId:(nullable NSString *)publisherSlotId;

/// Presents the Interstitial
/// @param rootViewController view controller to present from
/// @param dismissTransition frame (in screen coordinates) of the rectangle from which the interstitial transition
/// begins and to which it returns.
- (void)presentFromRootViewController:(UIViewController *)rootViewController
                    dismissTransition:(CGRect)dismissTransition;

@end

NS_ASSUME_NONNULL_END
