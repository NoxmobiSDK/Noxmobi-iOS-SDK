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
@property (nonatomic, assign, readonly) BOOL muteStart;// 静音启动

// ================================UMP=================================
// 是否启用UMP
@property (nonatomic, assign, readonly) BOOL UMPEnable;
// UMP测试时需要的所有测试设备的ID
@property (nonatomic, strong, readonly) NSArray<NSString *> *UMPDeviceIDs;
// ================================End=================================

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

/**
 @param UMPEnable 设置YES表示使用UMP处理GDPR、IDFA以及CCPA等隐私权限，默认NO
 @param deviceIDs UMP在控制台输出的测试设备ID，类似于下面这条信息:
    <UMP SDK> To enable debug mode for this device, set: UMPDebugSettings.testDeviceIdentifiers = @[ @"26BFEBC8-5B2B-4DF3-XXXX-A9183DEBA209" ];
 @param completion 如果使用UMP，请在此回调中开始您的广告请求，否则将可能违反GDPR等相关条款
 */
- (void)setUMPAlertEnable:(BOOL)UMPEnable
            testDeviceIDs:(nullable NSArray<NSString *> *)deviceIDs
               completion:(nullable void(^)(void))completion;

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
