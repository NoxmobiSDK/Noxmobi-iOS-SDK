//
//	NoxIAPProduct.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/6/1.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "NoxIAPConst.h"

@class SKProduct;

NS_ASSUME_NONNULL_BEGIN

@interface NoxIAPProduct : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSString *productTitle;
@property (nonatomic, copy) NSString *productDescription;
@property (nonatomic, copy) NSString *productCurrencyCode;
@property (nonatomic, copy) NSString *productPrice;
@property (nonatomic, copy) NSString *productID;
//@property (nonatomic, assign) NoxIAPProductType productType;
@property (nonatomic, strong) SKProduct *sourceProduct;

@end

NS_ASSUME_NONNULL_END
