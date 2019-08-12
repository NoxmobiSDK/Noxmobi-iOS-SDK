//
//  NoxInterstitialDelegate.h
//  TestFBAds
//
//  Created by nox_chong on 2019/1/8.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxInterstitialDelegate <NSObject>

@optional

/**
 广告展示失败
 */
- (void)adViewFailToShow:(NSString *)placementID error:(nullable NSError *)error;

/**
 广告可用状态改变
 */
- (void)adViewAvailableDidChange:(NSString *)placementID isAvailable:(BOOL)isAvailable;

/**
 广告资源加载失败
 */
- (void)adViewFailToReceiveAd:(NSString *)placementID error:(NSError *)error;

/**
 广告即将展示
 */
- (void)adViewWillShow:(NSString *)placementID;

/**
 广告即将被关闭
 */
- (void)adViewWillClosed:(NSString *)placementID;

/**
 广告已经被关闭
 */
- (void)adViewDidClosed:(NSString *)placementID;

/**
 广告被点击
 */
- (void)adViewDidClicked:(NSString *)placementID;


@end

NS_ASSUME_NONNULL_END
