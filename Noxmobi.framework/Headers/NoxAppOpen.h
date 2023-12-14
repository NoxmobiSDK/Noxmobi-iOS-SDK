//
//  NoxAppOpen.h
//  Noxmobi
//
//  Created by nox on 2023/2/22.
//  Copyright © 2023 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Noxmobi/NoxAppOpenDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxAppOpen : NSObject

/**
 初始化开屏单例对象

 @param placementID 广告位id
 
 @discussion 程序生命周期内只需要初始化一次即可，请勿多次调用
 */
+ (void)initializeWithPlacementID:(NSString *)placementID;

/**
 设置事件代理
 */
+ (void)setAdDelegate:(id<NoxAppOpenDelegate>)delegate forPlacementID:(NSString *)placementID;

/**
 展示一个开屏广告

 @param rootViewController 用于展示插屏广告的控制器
 */
+ (void)showAdOnViewController:(nonnull UIViewController *)rootViewController forPlacementID:(NSString *)placementID;

/**
 开屏广告是否可展示
 */
+ (BOOL)isAdAvailable:(NSString *)placementID;

/**
 销毁一个开屏广告对象
 */
+ (void)destroyAdForPlacement:(NSString *)placementID;

/**
 强制加载广告
 
 @param complete 当广告加载成功时将会触发此回调
 */
+ (void)forceLoadAd:(NSString *)placementID complete:(void(^)(void))complete;

@end

NS_ASSUME_NONNULL_END
