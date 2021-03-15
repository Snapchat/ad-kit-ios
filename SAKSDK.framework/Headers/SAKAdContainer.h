//
//  SAKAdContainer.h
//  SAKSDK
//
//  Copyright (c) 2020 Snap Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SAKAdContainer;
@class SAKAdRequestConfiguration;
@class SAKAdViewController;

@protocol SAKAdContainerDelegate <NSObject>

/** Called when an ad has been loaded by adContainer and is ready to be displayed */
- (void)adContainerDidLoad:(SAKAdContainer *)adContainer;
/** Called when there's been an error while downloading an ad */
- (void)adContainer:(SAKAdContainer *)ad didFailWithError:(NSError *)error;

@end

/**
 * An object that is used to load an ad.
 * Provides access to a view controller that displays an ad.
 */
API_AVAILABLE(ios(10.0))
@interface SAKAdContainer : NSObject

/** Receiver's delegate */
@property (nonatomic, weak, readwrite, nullable) id<SAKAdContainerDelegate> delegate;
/** The view controller to be used to display a loaded ad */
@property (nonatomic, readonly, nullable) SAKAdViewController *adViewController;
/** Whether or not the ad is ready to be displayed */
@property (nonatomic, readonly, getter=isReady) BOOL ready;

/**
 * Loads an ad if one hasn't already been loaded
 * @param configuration Optional ad request configuration
 */
- (void)loadRequest:(nullable SAKAdRequestConfiguration *)configuration;

@end

NS_ASSUME_NONNULL_END
