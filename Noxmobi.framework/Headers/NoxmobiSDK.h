//
//  NoxmobiSDK.h
//  Noxmobi
//
//  Created by nox_chong on 2019/1/17.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxmobiSDK : NSObject

@property (nonatomic, copy, readonly) NSString *token;
@property (nonatomic, copy, readonly) NSString *appKey;
@property (nonatomic, assign, readonly) BOOL isTestMode;
@property (nonatomic, assign, readonly) BOOL debugLogEnable;

/**
 获取单例
 */
+ (NoxmobiSDK *)sharedInstance;

/**
 调用此方法注册您在Nox平台获取的ApiToken以及AppKey
 */
- (void)registerApiToken:(NSString *)token appKey:(NSString *)appKey;

/**
 设置为YES表示您需要使用测试模式
 */
- (void)setTestModeEnable:(BOOL)enable;

/**
 设置为YES表示您需要使用Debug日志
 */
- (void)useDebugLog:(BOOL)enable;

/**
 展示一个检测页面，用来检测三方SDK的接入情况
 */
+ (void)showDebugView;

@end

NS_ASSUME_NONNULL_END
