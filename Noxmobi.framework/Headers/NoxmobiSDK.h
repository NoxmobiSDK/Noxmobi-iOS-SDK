//
//  NoxmobiSDK.h
//  Noxmobi
//
//  Created by Chong on 2019/1/17.
//  Copyright © 2019年 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxmobiSDK : NSObject

@property (nonatomic, copy, readonly) NSString *token;
@property (nonatomic, copy, readonly) NSString *appKey;
@property (nonatomic, assign, readonly) BOOL isTestMode;
@property (nonatomic, assign, readonly) BOOL debugLogEnable;
@property (nonatomic, assign, readonly) BOOL muteStart;

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

/**
 是否静音开启广告，默认为NO不静音开启广告 
 */
- (void)muteStart:(BOOL)mute;


#pragma mark - Remote Config API
/**
 初始化Remote Config
 
 注意：此方法必须在初始化Firebase之后再调用，否则无效
 
 @param plistName 设置RC默认配置所需的plist文件名
 @param minimumInterval 设置RC获取配置的最小间隔，-1 代表不设置；单位：秒(s)
 */
- (void)initializeRCWithDefaultsPlistFile:(nullable NSString *)plistName minimumFetchInterval:(NSTimeInterval)minimumInterval;


@end

NS_ASSUME_NONNULL_END
