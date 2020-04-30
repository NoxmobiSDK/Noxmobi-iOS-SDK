//
//  NoxmobiDefines.h
//  MyTestTool
//
//  Created by Chong on 2019/1/21.
//  Copyright © 2019年 Chong. All rights reserved.
//

#ifndef NoxmobiDefines_h
#define NoxmobiDefines_h

#ifdef __cplusplus
#define NOX_EXTERN extern "C" __attribute__((visibility("default")))
#else
#define NOX_EXTERN extern __attribute__((visibility("default")))
#endif


typedef NSString *NoxNativeRegisterKey NS_EXTENSIBLE_STRING_ENUM;
/**
 Native媒体控件注册Key
 */
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeAdViewRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeMediaViewRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeIconViewRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeAdChoicesRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeCTAButtonRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeHeadlineRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeAdvertiserRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeBodyTextRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeSocialRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativePriceRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeStoreRegisterKey;
NOX_EXTERN NoxNativeRegisterKey const kNoxmobiNativeAdTagRegisterKey;


#endif /* NoxmobiDefines_h */
