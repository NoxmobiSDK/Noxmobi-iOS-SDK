//
//	NoxIAPTransaction.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/6/3.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Noxmobi/NoxBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxIAPTransaction : NoxBaseModel <NSCoding, NSSecureCoding>

/// 交易ID
@property (nonatomic, copy) NSString *transactionId;
/// 原始交易ID
@property (nonatomic, copy) NSString *originalTransactionId;
/// 商品ID
@property (nonatomic, copy) NSString *productId;
/// 购买时间戳
@property (nonatomic, copy) NSString *purchaseMs;
/// 过期时间戳（仅自动续期订阅）
@property (nonatomic, copy) NSString *expiresMs;
/// 收据元数据
@property (nonatomic, strong) NSData *receiptData;
/// 报错信息
@property (nonatomic, strong) NSError *error;

@end

NS_ASSUME_NONNULL_END
