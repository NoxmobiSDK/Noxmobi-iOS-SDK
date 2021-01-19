//
//	NoxAdapterProtocol.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/7/13.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Noxmobi/NoxAdSize.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxConnectorProtocol;

@class NoxNativeAdView, NoxNativeMediaView, NoxNativeIconView, NoxNativeAdChoicesView;

@protocol NoxAdapterProtocol <NSObject>

@optional

#pragma mark - 公共方法

/// 获取Adapter版本号
+ (NSString *)adapterVersion;

/// 获取三方SDK版本号
+ (NSString * __nullable)sdkVer;

/// 初始化Adapter
- (instancetype)initWithConnector:(id<NoxConnectorProtocol>)connector;


#pragma mark - Google UMP SDK 弹窗
- (void)startUMPAlert:(void(^)(void))handler;


#pragma mark - Banner

/// 针对于MoPub这种必须在SDK初始化之后才能
@property (nonatomic, strong) id bannerAd;

/// 获取一个横幅广告
- (id __nullable)loadBannerWithSize:(NoxAdSize)adSize;

/// IronSource专属，销毁上一个Banner才可以请求下一个
- (void)destroyLastIronSourceBanner;


#pragma mark - Interstitial

/// Adapter加载一个插屏广告
- (void)loadInterstitial;

/// 展示一个插屏广告
- (void)showInterstitialAd:(UIViewController *)rootViewController;

/// 插屏广告是否可用
- (BOOL)isInterstitialAvailable;


#pragma mark - Reward

/// Adapter加载一个激励广告
- (void)loadRewardVideo;

/// 展示一个激励广告
- (void)showRewardAd:(UIViewController *)rootViewController;

/// 激励广告是否可用
- (BOOL)isRewardAvailable;


#pragma mark - Native
/// Adapter加载一个原生广告
- (void)loadNative;

/// 注册NativeAdView、IconView、MediaView以及可点击ComponentView；传过去的都是三方的真实控件对象
- (void)registerNativeAdView:(id)realAdView mediaView:(id)realMediaView iconView:(id)realIconView clickableViews:(nullable NSDictionary *)clickableViews;

/// 注册广告选择叠加层视图：必要控件；传过去的是三方的真实控件对象
- (void)registerNativeAdChoicesView:(id)realAdChoicesView;
/// 注册主标题：必要控件（G:标题，F:赞助商）
- (void)registerNativeHeadlineLabel:(UILabel *)headlineLabel;
/// 注册赞助商：必要控件（G:赞助商，F:广告标识）
- (void)registerNativeAdvertiserLabel:(UILabel *)advertiserLabel;
/// 注册广告正文：必要控件
- (void)registerNativeBodyTextLabel:(UILabel *)bodyTextLabel;
/// 注册行动号召按钮：必要控件
- (void)registerNativeCallToActionButton:(UIButton *)callToActionButton;
/// 注册社交信息：非必要控件，可能为空
- (void)registerNativeSocialContext:(UILabel *)socialContext;
/// 注册App售价：非必要控件，可能为空
- (void)registerNativePriceLabel:(UILabel *)priceLabel;
/// 注册应用商店名称：非必要控件，可能为空
- (void)registerNativeStoreView:(UILabel *)storeView;

/// 创建NativeAdView
- (UIView *)makeNativeAdView;
/// 创建MediaView
- (UIView *)makeMediaView;
/// 创建IconView
- (UIView *)makeIconView;
/// 创建AdChoicesView
- (UIView *)makeAdChoicesView;

@end

NS_ASSUME_NONNULL_END
