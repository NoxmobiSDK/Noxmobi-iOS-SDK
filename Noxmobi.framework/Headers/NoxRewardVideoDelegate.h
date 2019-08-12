//
//  NoxRewardVideoDelegate.h
//  TestFBAds
//
//  Created by nox_chong on 2019/1/10.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxRewardVideoDelegate <NSObject>

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
 广告播放完毕，可以在此回调中给用户发放奖励
 */
- (void)rewardVideoDidCompletePlaying:(NSString *)placementID;

/**
 广告资源加载失败
 */
- (void)rewardVideoFailToReceiveAd:(NSString *)placementID error:(NSError * _Nullable)error;

/**
 广告已展示
 */
- (void)rewardVideoDidShow:(NSString *)placementID;

/**
 广告被点击
 */
- (void)rewardVideoDidClicked:(NSString *)placementID;

/**
 广告开始播放
 */
- (void)rewardVideoDidStartPlaying:(NSString *)placementID;

/**
 广告被关闭
 */
- (void)rewardVideoDidClosed:(NSString *)placementID;

@end

NS_ASSUME_NONNULL_END
