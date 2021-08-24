//
//  NoxPromoForUnityProtocol.h
//  Noxmobi
//
//  Created by nox_chong on 2021/8/17.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxPromoForUnityDelegate;

// Unity 调用 iOS
@protocol NoxPromoForUnityProtocol <NSObject>

@property (nonatomic, weak) id<NoxPromoForUnityDelegate> promoDelegate;

// 初始化
- (instancetype)initWithPid:(NSString *)pid;

// 请求DSP并缓存资源文件
- (void)loadPromoAd;

// 获取当前需要播放的Promo广告数据
- (void)fetchPromoAd;

// 是否可用
- (BOOL)isAdAvailable;

// 广告点击
- (void)clickPromoAd;

// 广告即将展示
- (void)willShowPromoAd;

// 广告已展示
- (void)didShowPromoAd;

// 广告展示失败
- (void)failedToShowPromoAd:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
