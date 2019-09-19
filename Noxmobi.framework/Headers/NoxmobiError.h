//
//  NoxmobiError.h
//  Noxmobi
//
//  Created by nox_chong on 2019/1/26.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NoxmobiDefines.h"

NS_ASSUME_NONNULL_BEGIN

NOX_EXTERN NSString *const NOX_ERROR_DOMAIN;

typedef enum : NSUInteger {
    
    /*
     网络连接错误。网络请求失败，请检查网络设置。
     */
    NoxmobiErrorNetworkError = 100,
    
    /*
     服务端错误。
     */
    NoxmobiErrorServerError = 101,
    
    /*
     参数错误。请检查配置的Appkey、ApiToken以及广告位的PlacementID。
     */
    NoxmobiErrorArgumentIllegal = 102,
    
    /*
     加载广告失败。未正确导入第三方SDK，或者在Nox平台设置的第三方广告平台信息有误！
     */
    NoxmobiErrorFailToLoadAds = 103,
    
    /*
     传入了无效的RootViewController
     */
    NoxmobiErrorNoRootViewController = 104,
    
    /*
     未正确导入第三方SDK，或者Noxmobi暂不支持第三方的此类广告形式！
     */
    NoxmobiErrorUninstallSDKOrNonsupport = 105,
    
    /*
     传入的superView存在一个或多个问题！
     */
    NoxmobiErrorUnavailableSuperview = 106,
    
    /*
     无可用广告
     */
    NoxmobiErrorAdIsUnavailableNow = 107, //
    
    /*
     广告位不存在！请查看您提供的PlacementID是否正确。
     */
    NoxmobiErrorPlacementDoesNotExist = 108,
    
    /*
     Server端配置有误
     */
    NoxmobiErrorConfigError = 109,
    
    /*
     Server端配置的AppLovinSdkKey 与 info.plist 中的不一致
     */
    NoxmobiErrorAppLovinSdkKeyError = 110,
    
    /*
     单日点击次数超限
     */
    NoxmobiErrorClickLimitError = 111
    
} NoxmobiError;

NS_ASSUME_NONNULL_END
