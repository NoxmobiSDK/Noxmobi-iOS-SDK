//
//	NoxIAPConfig.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/12/7.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Noxmobi/NoxIAPConst.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxIAPManagerDelegate;

@class NoxIAPProductRequest;

@interface NoxIAPConfig : NSObject

// 开启沙盒测试环境；默认为NO
@property (nonatomic, assign) BOOL sandboxEnv;

// 共享秘钥（可以是'主共享秘钥'，也可以是'App专用共享密钥'）
@property (nonatomic, copy) NSString *shareSecret;

// IAP Manager 事件代理
@property (nonatomic, weak) id<NoxIAPManagerDelegate> delegate;

/// 添加商品ID与其对应的商品类型，为购买做准备
- (void)addProductID:(NSString *)productID forType:(NoxIAPProductType)productType;

// 商品ID与类型详情
@property (nonatomic, strong, readonly) NSDictionary *productIDTypeInfo;
// 可恢复购买的商品ID
@property (nonatomic, strong, readonly) NSArray *restorableProductIDs;

@end

NS_ASSUME_NONNULL_END
