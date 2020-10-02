//
//  SAKRewardedAd.h
//  SAKSDK
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKRewardedAd;
@class SAKAdRequestConfiguration;

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
- (void)presentFromRootViewController:(UIViewController *)rootViewController
                    dismissTransition:(CGRect)dismissTransition;

@end

NS_ASSUME_NONNULL_END
