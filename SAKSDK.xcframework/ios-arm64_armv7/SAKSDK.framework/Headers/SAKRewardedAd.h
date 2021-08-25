//
//  SAKRewardedAd.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SAKRewardedAd;
@class SAKAdRequestConfiguration;

NS_ASSUME_NONNULL_BEGIN

@protocol SAKRewardedAdDelegate <NSObject>

- (void)rewardedAdDidLoad:(SAKRewardedAd *)ad;

- (void)rewardedAd:(SAKRewardedAd *)ad didFailWithError:(NSError *)error;

- (void)rewardedAdDidExpire:(SAKRewardedAd *)ad;

- (void)rewardedAdWillAppear:(SAKRewardedAd *)ad;

- (void)rewardedAdDidAppear:(SAKRewardedAd *)ad;

- (void)rewardedAdWillDisappear:(SAKRewardedAd *)ad;

- (void)rewardedAdDidDisappear:(SAKRewardedAd *)ad;

- (void)rewardedAdDidShowAttachment:(SAKRewardedAd *)ad;

- (void)rewardedAdDidEarnReward:(SAKRewardedAd *)ad;

@end

API_AVAILABLE(ios(10.0))
@interface SAKRewardedAd : NSObject

@property (nonatomic, weak, readwrite, nullable) id<SAKRewardedAdDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL isReady;

- (void)loadRequest:(nullable SAKAdRequestConfiguration *)configuration;

/// Load ad from a bid payload from a server side bid
/// @param bidPayload ad payload to be rendered by the receiver
/// @param publisherSlotId optional slot ID
- (void)loadAdWithBidPayload:(NSData *)bidPayload publisherSlotId:(nullable NSString *)publisherSlotId;

/// Presents the Rewarded Ad
/// @param rootViewController view controller to present from
/// @param dismissTransition frame (in screen coordinates) of the rectangle from which the rewarded ad transition begins
/// and to which it returns.
- (void)presentFromRootViewController:(UIViewController *)rootViewController
                    dismissTransition:(CGRect)dismissTransition;

@end

NS_ASSUME_NONNULL_END
