/*
 * PubMatic Inc. ("PubMatic") CONFIDENTIAL
 * Unpublished Copyright (c) 2006-2019 PubMatic, All Rights Reserved.
 *
 * NOTICE:  All information contained herein is, and remains the property of
 * PubMatic. The intellectual and technical concepts contained herein are
 * proprietary to PubMatic and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material is
 * strictly forbidden unless prior written permission is obtained from PubMatic.
 * Access to the source code contained herein is hereby forbidden to anyone
 * except current PubMatic employees, managers or contractors who have executed
 * Confidentiality and Non-disclosure agreements explicitly covering such
 * access.
 *
 * The copyright notice above does not evidence any actual or intended
 * publication or disclosure  of  this source code, which includes information
 * that is confidential and/or proprietary, and is a trade secret, of  PubMatic.
 * ANY REPRODUCTION, MODIFICATION, DISTRIBUTION, PUBLIC  PERFORMANCE, OR PUBLIC
 * DISPLAY OF OR THROUGH USE  OF THIS  SOURCE CODE  WITHOUT  THE EXPRESS WRITTEN
 * CONSENT OF PubMatic IS STRICTLY PROHIBITED, AND IN VIOLATION OF APPLICABLE
 * LAWS AND INTERNATIONAL TREATIES.  THE RECEIPT OR POSSESSION OF  THIS SOURCE
 * CODE AND/OR RELATED INFORMATION DOES NOT CONVEY OR IMPLY ANY RIGHTS TO
 * REPRODUCE, DISCLOSE OR DISTRIBUTE ITS CONTENTS, OR TO MANUFACTURE, USE, OR
 * SELL ANYTHING THAT IT  MAY DESCRIBE, IN WHOLE OR IN PART.
 */

#import <Foundation/Foundation.h>
#import <POBBannerEvent.h>
#import <MPAdView.h>

/*!
 Mopub banner configuration block having MPAdView as parameter
 */
typedef void(^MPBannerConfigBlock)(MPAdView *view);

/*!
 This class is responsible for communication between OpenBid banner view and Mopub banner view.
 It implements the POBBannerEvent protocol. it notifies event back to OpenBid SDK using POBBannerEventDelegate methods
 */
@interface MoPubBannerEventHandler : NSObject<POBBannerEvent>

/*!
 Initializes and returns a event handler with the specified Mopub ad unit and ad sizes
 
 @param adUnitId Mopub ad unit id
 @param size ad size
 */
- (instancetype)initAdunitId:(NSString *)adUnitId adSize:(CGSize)size;

/*!
 A configBlock that is called before event handler makes ad request call to Mopub SDK. It passes MPAdView which will be used to make ad request.
 */
@property (nonatomic, copy) MPBannerConfigBlock configBlock;
@end
