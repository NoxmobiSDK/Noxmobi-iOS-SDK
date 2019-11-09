//
//  NoxBannerView.h
//  TestFBAds
//
//  Created by nox_chong on 2019/1/5.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoxBannerViewDelegate.h"
#import "NoxAdSize.h"

NS_ASSUME_NONNULL_BEGIN

@interface NoxBannerView : UIView

/**
 初始化Banner单例对象

 @param placementID 广告位id

 @discussion 程序生命周期内只需要初始化一次即可，请勿多次调用
 
 adFrame举例：
 NoxAdFrame adFrame = NoxMakeAdFrame(12, 34, kNoxAdSize320x100);
 相当于banner的位置及尺寸：x = 12, y = 34, width = 320, height = 100
 */
+ (void)initWithAdFrame:(NoxAdFrame)adFrame placementID:(NSString *)placementID rootViewController:(UIViewController *)rootViewController;

/**
 设置事件代理
 */
+ (void)setAdDelegate:(id<NoxBannerViewDelegate>)delegate forPlacementID:(NSString *)placementID;

/**
 展示一个Banner广告

 @param superView 用于展示Banner广告的父视图
 @discussion 父视图有严格要求：
             1.superView不可为空
             2.superView不可开启hidden属性
             3.superView透明度不可过低
             4.superView的bounds.size不可过小
             5.superView必须能够正常展示，不可传入未在可见视图层级中的view
 */
+ (void)showOnSupperView:(UIView *)superView forPlacementID:(NSString *)placementID;

/**
 Banner广告是否可展示
 */
+ (BOOL)isAdAvailable:(NSString *)placementID;

/**
 移除Banner广告视图
*/
+ (void)removeBanner:(NSString *)placementID;

@end

NS_ASSUME_NONNULL_END
