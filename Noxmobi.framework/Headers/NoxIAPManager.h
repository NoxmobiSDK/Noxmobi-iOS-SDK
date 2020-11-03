//
//	NoxIAPManager.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/5/21.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Noxmobi/NoxIAPManagerDelegate.h>

@class NoxIAPProduct;

NS_ASSUME_NONNULL_BEGIN

@interface NoxIAPManager : NSObject

@property (nonatomic, weak) id<NoxIAPManagerDelegate> delegate;

/// 获取单例
+ (instancetype)shared;

/// 是否开启沙盒测试环境；默认为NO
- (void)sandboxEnvEnable:(BOOL)enable;

/// 设置共享秘钥（可以是'主共享秘钥'，也可以是'App专用共享密钥'）
- (void)registerShareSecret:(NSString *)shareSecret;

/// 请求商品列表
- (void)requestProducts:(NSArray *)productIDs;

/// 发起购买
- (void)buyProduct:(NoxIAPProduct *)product;

/// 恢复购买
- (void)restoreProducts;

/// 获取自动续期订阅最新信息
- (void)fetchAutoRenewableSubscription;

@end

NS_ASSUME_NONNULL_END
