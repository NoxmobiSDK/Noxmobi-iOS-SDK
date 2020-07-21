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
- (id __nullable)getBannerWithSize:(NoxAdSize)adSize;
/// Adapter持有一个插屏广告
- (void)getInterstitial;
/// Adapter持有一个激励视频广告
- (void)getRewardVideo;

/// 展示一个广告
- (void)showAd:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
