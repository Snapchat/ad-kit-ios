
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKInterstitial;
@class SAKAdRequestConfiguration;

@protocol SAKInterstitialDelegate <NSObject>

- (void)interstitialDidLoad:(SAKInterstitial *)ad;

- (void)interstital:(SAKInterstitial *)ad didFailWithError:(NSError *)error;

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
- (void)presentFromRootViewController:(UIViewController *)rootViewController
                    dismissTransition:(CGRect)dismissTransition;

@end

NS_ASSUME_NONNULL_END
