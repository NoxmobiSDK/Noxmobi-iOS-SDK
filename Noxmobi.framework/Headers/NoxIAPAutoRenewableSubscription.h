//
//	NoxIAPAutoRenewableSubscription.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/10/21.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxIAPAutoRenewableSubscription : NSObject

// 商品ID
@property (nonatomic, copy) NSString *productID;

// 自动续期订阅是否还在有效期
@property (nonatomic, assign) BOOL isValid;

@end

NS_ASSUME_NONNULL_END
