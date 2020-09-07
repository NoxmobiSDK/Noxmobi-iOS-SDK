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

@class NoxIAPProduct;

NS_ASSUME_NONNULL_BEGIN

@protocol NoxIAPManagerDelegate <NSObject>

/// 获取商品列表成功
- (void)didReceiveProducts:(NSArray<NoxIAPProduct *> *)products;
/// 获取商品列表失败
- (void)failedToReceiveProducts:(NSError *)error;
/// 支付流程状态
- (void)paymentStatus:(NoxIAPPaymentStatus)status product:(NoxIAPProduct *)product error:(nullable NSError *)error;
/// 恢复购买的商品
- (void)didReceiveRestoreProductIDs:(NSArray<NSString *> *)productIDs;

@end

NS_ASSUME_NONNULL_END
