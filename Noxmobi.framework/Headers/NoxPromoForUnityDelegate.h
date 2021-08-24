//
//  NoxPromoForUnityDelegate.h
//  Noxmobi
//
//  Created by nox_chong on 2021/8/17.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// iOS 调用 Unity
@protocol NoxPromoForUnityDelegate <NSObject>

/********************************************************
 广告获取成功（每次展示需要的Promo广告）
 
 数据格式
 {
     "url": "https://www.example.mp4",
     "title": "example"
 }
 ********************************************************/
- (void)promoAdDidFetched:(NSString *)adJson placementID:(NSString *)placementID;

/**************************
 请求DSP并且下载缓存成功
 **************************/
- (void)promoLoadAndCacheSucceed:(NSString *)placementID;


@end

NS_ASSUME_NONNULL_END
