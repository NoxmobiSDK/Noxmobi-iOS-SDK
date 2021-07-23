//
//  NoxPromoDelegate.h
//  Noxmobi
//
//  Created by nox_chong on 2021/7/6.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxPromoDelegate <NSObject>

/**
 广告加载成功，可用于展示
 */
- (void)promoAdReadyToShow:(NSString *)placementID;

/**
 广告即将展示
 */

- (void)promoAdWillShow:(NSString *)placementID;

/**
 广告已展示
 */

- (void)promoAdDidShow:(NSString *)placementID;

/**
 广告展示失败
 */
- (void)promoAdFailedToShow:(NSString *)placementID error:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
