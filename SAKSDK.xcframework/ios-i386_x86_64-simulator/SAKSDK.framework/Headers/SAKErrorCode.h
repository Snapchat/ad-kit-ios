//
//  SAKErrorCode.h
//  SAKSDK
//
//  Copyright (c) 2021 Snap Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SAKErrorCode) {
    /*
     * Generic error
     */
    SAKErrorGeneric = 0,
    /*
     * Network error
     */
    SAKErrorNetworkError = 1,
    /*
     * Cannot request ad due user not eligible
     */
    SAKErrorNotEligible = 2,
    /*
     * Cannot parse response from network request
     */
    SAKErrorFailedToParse = 3,
    /*
     * Cannot request ad due to SDK not ready
     */
    SAKErrorSDKNotInitialized = 4,
    /*
     * No ad returned from server
     */
    SAKErrorNoAdAvailable = 5,
    /*
     * Cannot find creative endpoint to download ad media
     */
    SAKErrorCodeNoCreativeEndpoint = 6,
    /*
     * Media download error
     */
    SAKErrorCodeMediaDownloadError = 7,
    /*
     * Failed to Register
     */
    SAKErrorFailedToRegister = 8,
    /*
     * Ads are disabled
     */
    SAKErrorAdsDisabled = 9,
    /*
     * Ad not visible
     */
    SAKErrorAdNotVisible = 10,
};
