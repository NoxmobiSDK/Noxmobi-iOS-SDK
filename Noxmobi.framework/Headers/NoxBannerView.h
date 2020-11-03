//
//  NoxBannerView.h
//  TestFBAds
//
//  Created by Chong on 2019/1/5.
//  Copyright © 2019年 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Noxmobi/NoxBannerViewDelegate.h>
#import <Noxmobi/NoxAdSize.h>
#import <Noxmobi/NoxTemplateStyle.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxBannerView : UIView

/**
初始化支持Banner&Native混排的单例对象

@discussion rootViewController在广告展示前若被销毁，请重新调用此方法传入可用的rootViewController
*/
+ (void)initWithPlacementID:(NSString *)placementID
     rootViewController:(UIViewController *)rootViewController
          templateStyle:(NoxTemplateStyle)templateStyle;

/**
初始化Banner单例对象

@discussion rootViewController在广告展示前若被销毁，请重新调用此方法传入可用的rootViewController

adFrame举例：
    NoxAdFrame adFrame = NoxMakeAdFrame(12, 34, kNoxAdSize320x100);
    相当于banner的位置及尺寸：x = 12, y = 34, width = 320, height = 100
*/
+ (void)initWithAdFrame:(NoxAdFrame)adFrame
            placementID:(NSString *)placementID
     rootViewController:(UIViewController *)rootViewController;

/**
 设置事件代理
 */
+ (void)setAdDelegate:(id<NoxBannerViewDelegate>)delegate forPlacementID:(NSString *)placementID;

/**
 展示一个Banner广告
 
 如果在init系列方法中没有传入SuperView，则应使用本方法展示Banner
 
 @param superView 用于展示Banner广告的父视图
 
 @discussion 父视图有严格要求：
 1.superView不可为空
 2.superView不可开启hidden属性
 3.superView透明度不可过低
 4.superView的bounds.size不可过小
 5.superView必须能够正常展示，不可传入未在可见视图层级中的view
 */
+ (void)showOnSuperView:(UIView *)superView forPlacementID:(NSString *)placementID;

/**
 Banner广告是否可展示
 */
+ (BOOL)isAdAvailable:(NSString *)placementID;

/**
 移除Banner广告视图
*/
+ (void)removeBanner:(NSString *)placementID;

/**
 设置是否自动刷新，默认为YES
 */
+ (void)autoRefreshEnable:(BOOL)enable forPlacementID:(NSString *)placementID;

/**
 设置自动刷新的时间间隔，默认为15s
 */
+ (void)autoRefreshDuration:(NSTimeInterval)duration forPlacementID:(NSString *)placementID;

@end

NS_ASSUME_NONNULL_END
