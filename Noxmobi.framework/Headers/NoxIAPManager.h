//
//	NoxIAPManager.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/5/21.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NoxIAPProduct, NoxIAPConfig;

NS_ASSUME_NONNULL_BEGIN

@interface NoxIAPManager : NSObject

/// 初始化配置
+ (void)setupWithConfiguration:(NoxIAPConfig *)config;

/// 是否已初始化；YES表示已完成初始化
+ (BOOL)hadInitialized;

/// 请求商品列表
+ (void)requestProducts;

/// 发起购买
+ (void)buyProduct:(NoxIAPProduct *)product;

/// 恢复购买
+ (void)restoreProducts;

@end

NS_ASSUME_NONNULL_END
