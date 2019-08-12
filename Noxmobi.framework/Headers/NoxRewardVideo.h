//
//  NoxRewardVideo.h
//  TestFBAds
//
//  Created by nox_chong on 2019/1/10.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoxRewardVideoDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface NoxRewardVideo : NSObject

/**
 初始化激励视频单例对象
 
 @param placementID 广告位id
 
 @discussion 程序生命周期内只需要初始化一次即可，请勿多次调用
 */
+ (void)initializeWithPlacementID:(NSString *)placementID;

/**
 设置事件代理
 */
+ (void)setRewardedDelegate:(id<NoxRewardVideoDelegate>)delegate forPlacementID:(NSString *)placementID;

/**
 展示一个激励视频广告
 
 @param rootViewController 用于展示激励视频广告的控制器
 */
+ (void)showRewardedOnViewController:(nonnull UIViewController *)rootViewController forPlacementID:(NSString *)placementID;

/**
 激励视频广告是否可展示
 */
+ (BOOL)isAdAvailable:(NSString *)placementID;

/**
 销毁一个激励视频广告对象
 */
+ (void)destroyAdForPlacement:(NSString *)placementID;

// =================================👇 下面的弃用 👇=============================================

/** 弃用
 获取奖励视频广告单例对象
 */
// + (NoxRewardVideo *)shareInstance;

/** 弃用
 通过placementID加载广告资源
 
 @param placementID 在Nox平台注册的奖励视频广告位ID
 */
- (void)loadWithPlacementID:(NSString *)placementID NS_UNAVAILABLE;

/** 弃用
 接收奖励视频回调的代理
 */
// @property (nonatomic, weak, nullable) id<NoxRewardVideoDelegate> delegate;

/** 弃用
 返回YES表示广告资源已加载成功可用于展示。
 */
// @property (nonatomic, readonly, assign) BOOL isReady;

/** 弃用
 通过rootViewController展示一个NoxRewardVideo广告
 
 @param rootViewController 用于展示NoxRewardVideo广告的控制器
 */
- (void)showRewardVideoOnViewController:(nonnull UIViewController *)rootViewController NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
