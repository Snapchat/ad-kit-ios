//
//  SAKAdViewController.h
//  SAKSDK
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKAdViewController;

@protocol SAKAdViewControllerDelegate <NSObject>

/**
 * Invoked when receiver starts displaying the ad.
 * Receiver must not be dismissed until `adViewControllerAllowAdDismissal:` is called.
 */
- (void)adViewControllerPreventAdDismissal:(SAKAdViewController *)ad;

/** Invoked after receiver has finished displaying the ad. It's ok to dismiss the ad after you receive this callback. */
- (void)adViewControllerAllowAdDismissal:(SAKAdViewController *)ad;

/** Invoked after receiver has fired an ad track. */
- (void)adViewControllerDidTrackImpression:(SAKAdViewController *)ad;

/** Invoked when receiver has encountered an error. */
- (void)adViewController:(SAKAdViewController *)ad didEncounterAdError:(NSError *)error;

@end

/** A UIViewController subclass that displays an ad */
API_AVAILABLE(ios(10.0))
@interface SAKAdViewController : UIViewController

@property (nonatomic, weak, nullable) id<SAKAdViewControllerDelegate> delegate;

/**
 * An array of "friendly" obstructions (layers rendered on top of the ad displayed by the receiver).
 * These layers won't be taken into account while determining whether the ad is 100% visible on screen.
 */
@property (nonatomic, nullable) NSArray<CALayer *> *friendlyObstructions;

+ (instancetype) new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithNibName:(nullable NSString *)nibNameOrNil
                         bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;

- (void)playAd;
- (void)pauseAd;

@end

NS_ASSUME_NONNULL_END
