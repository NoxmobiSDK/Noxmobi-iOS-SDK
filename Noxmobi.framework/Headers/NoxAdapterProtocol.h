//
//	NoxAdapterProtocol.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/7/13.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoxAdSize.h"

NS_ASSUME_NONNULL_BEGIN

@protocol NoxConnectorProtocol;

@protocol NoxAdapterProtocol <NSObject>
@optional

/// 获取Adapter版本号
+ (NSString *)adapterVersion;

/// 获取三方SDK版本号
+ (NSString * __nullable)sdkVer;

/// 初始化Adapter
- (instancetype)initWithConnector:(id<NoxConnectorProtocol>)connector;

/// 获取一个横幅广告
- (id __nullable)loadBannerWithSize:(NoxAdSize)adSize;

/// Adapter加载一个插屏广告
- (void)loadInterstitial;

/// Adapter加载一个激励广告
- (void)loadRewardVideo;

/// 展示一个插屏广告
- (void)showInterstitialAd:(UIViewController *)rootViewController;

/// 展示一个激励广告
- (void)showRewardAd:(UIViewController *)rootViewController;

/// 插屏广告是否可用
- (BOOL)isInterstitialAvailable;

/// 激励广告是否可用
- (BOOL)isRewardAvailable;

/// 针对于MoPub这种必须在SDK初始化之后才能
@property (nonatomic, strong) id bannerAd;

@end

NS_ASSUME_NONNULL_END
