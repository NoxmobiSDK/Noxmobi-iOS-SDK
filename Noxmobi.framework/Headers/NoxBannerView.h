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
 初始化BannerView
 
 请务必在主线程调用，否则视图可能出现未知错误

 @param adSize NoxBannerView的宽高。例如：kNoxAdSize320x50 或 kNoxAdSize320x250
 @param origin NoxBannerView原点位置。
 @param placementID 广告位id。在Nox平台申请的广告位id，不能为空。
 @param rootViewController UIViewController对象，用于控制Banner跳转，不能为空。
 */
- (instancetype)initWithAdSize:(NoxAdSize)adSize origin:(CGPoint)origin placementID:(NSString *)placementID rootViewController:(UIViewController *)rootViewController;

/**
 广告位ID
 */
@property (nonatomic, copy, readonly) NSString *placementID;

/**
 NoxBannerView的回调代理
 */
@property (nonatomic, weak, nullable) id<NoxBannerViewDelegate> delegate;

/**
 NoxBannerView是否可用于展示
 */
@property (nonatomic, assign, readonly, getter = isAvailable) BOOL available;

/**
 展示bannerView

 @param superView banner的父视图。
 
 @discussion 父视图有严格要求：
             1.superView不可为空
             2.superView不可开启hidden属性
             3.superView透明度不可过低
             4.superView的bounds.size不可过小
             5.superView必须能够正常展示，不可传入未在可见视图层级中的view
 */
- (void)showOnSupperView:(UIView *)superView;

@end

NS_ASSUME_NONNULL_END
