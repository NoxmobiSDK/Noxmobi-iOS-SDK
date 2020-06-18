//
//	NoxIAPProduct.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/6/1.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SKProduct;

NS_ASSUME_NONNULL_BEGIN

@interface NoxIAPProduct : NSObject
@property (nonatomic, copy) NSString *productTitle;
@property (nonatomic, copy) NSString *productDescription;
@property (nonatomic, copy) NSString *productCurrencyCode;
@property (nonatomic, copy) NSString *productPrice;
@property (nonatomic, copy) NSString *productID;
//@property (nonatomic, copy) NSString *transactionID;
@property (nonatomic, strong) SKProduct *sourceProduct;

@end

NS_ASSUME_NONNULL_END
