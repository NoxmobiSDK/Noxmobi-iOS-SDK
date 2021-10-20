//
//	NoxIAPManagerDelegate.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/6/10.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Noxmobi/NoxIAPConst.h>
#import <Noxmobi/NoxmobiDefines.h>

@class NoxIAPProduct, NoxIAPTransaction;

NS_ASSUME_NONNULL_BEGIN

@protocol NoxIAPManagerDelegate <NSObject>

/// 初始化Nox IAP系统成功
- (void)noxIAPInitializeSucceed;

/// 初始化Nox IAP系统失败
- (void)noxIAPInitializeFailed:(NSError *)error;

/// 获取商品列表成功
- (void)didReceiveProducts:(NSArray<NoxIAPProduct *> *)products;

/// 获取商品列表失败
- (void)failedToReceiveProducts:(NSError *)error;

/// 支付流程状态
- (void)paymentStatus:(NoxIAPPaymentStatus)status transaction:(NoxIAPTransaction *)transaction;

/// 恢复购买
- (void)didReceiveRestoreTransactions:(NSArray<NoxIAPTransaction *> *)transactions error:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
