//
//  NoxBannerViewDelegate.h
//  TestFBAds
//
//  Created by nox_chong on 2019/1/5.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class NoxBannerView;

@protocol NoxBannerViewDelegate <NSObject>

@optional

/**
 广告展示失败
 */
- (void)adViewFailToDisplayWithError:(NSError * _Nullable )error placementID:(NSString *)placementID;

/**
 广告可用状态改变
 */
- (void)adViewAvailableDidChange:(BOOL)isAvailable placementID:(NSString *)placementID;

/**
 广告资源加载失败
 */
- (void)adViewFailToReceiveAdWithError:(NSError *)error placementID:(NSString *)placementID;

/**
 广告被点击
 */
- (void)adViewDidClickedPlacementID:(NSString *)placementID;

/**
 广告已展示
 */
- (void)adViewDidShowPlacementID:(NSString *)placementID;

@end

NS_ASSUME_NONNULL_END
