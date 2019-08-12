//
//  NoxInterstitial.h
//  TestFBAds
//
//  Created by nox_chong on 2019/1/8.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoxInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface NoxInterstitial : NSObject

/**
 初始化插屏单例对象

 @param placementID 广告位id
 
 @discussion 程序生命周期内只需要初始化一次即可，请勿多次调用
 */
+ (void)initializeWithPlacementID:(NSString *)placementID;

/**
 设置事件代理
 */
+ (void)setAdDelegate:(id<NoxInterstitialDelegate>)delegate forPlacementID:(NSString *)placementID;

/**
 展示一个插屏广告

 @param rootViewController 用于展示插屏广告的控制器
 */
+ (void)showAdOnViewController:(nonnull UIViewController *)rootViewController forPlacementID:(NSString *)placementID;

/**
 插屏广告是否可展示
 */
+ (BOOL)isAdAvailable:(NSString *)placementID;

/**
 销毁一个插屏广告对象
 */
+ (void)destroyAdForPlacement:(NSString *)placementID;

@end

NS_ASSUME_NONNULL_END
