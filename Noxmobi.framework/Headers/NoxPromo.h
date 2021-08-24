//
//  NoxPromo.h
//  Noxmobi
//
//  Created by nox_chong on 2021/7/6.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Noxmobi/NoxPromoDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxPromoInitInfo : NSObject

// 广告位id
@property (nonatomic, copy) NSString *placementID;
// 广告视图的位置，默认：CGPointZero
@property (nonatomic, assign) CGPoint promoOrigin;

@end

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"

@protocol NoxPromoForUnityProtocol;

@interface NoxPromo : UIView <NoxPromoForUnityProtocol>

#pragma clang diagnostic pop

// 可以接收交叉推广广告声明周期内的各类事件
@property (nonatomic, weak) id<NoxPromoDelegate> delegate;

/**
 交叉推广广告是否可用于展示
 */
@property (nonatomic, assign) BOOL isAdAvailable;

/**
 初始化交叉推广广告视图对象
 
 @param initInfo 初始化配置
 
 @discussion 非单例对象，可自行从父视图移除或销毁。每个对象对应一个广告位。
 */
- (instancetype)initWithInitInfo:(NoxPromoInitInfo *)initInfo;

/**
 加载广告
 */
- (void)loadPromoAd;

/**
 展示广告
 
 注意：调用removeFromSuperView方法移除NoxPromo广告视图后，下次仍然可以继续添加到视图并调用此方法进行展示广告，无需再次初始化
 */
- (void)showPromoAd;


@end

NS_ASSUME_NONNULL_END
