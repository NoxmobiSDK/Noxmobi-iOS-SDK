//
//	NoxIAPConst.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/6/10.
//  Copyright © 2020 Chong. All rights reserved.
//

#ifndef NoxIAPConst_h
#define NoxIAPConst_h

typedef NS_ENUM(NSUInteger, NoxIAPPaymentStatus) {
    NoxIAPPaymentStatusFailed,  // 支付失败
    NoxIAPPaymentStatusSucceed, // 支付成功
    NoxIAPPaymentStatusDeferred, // 交易延迟
    NoxIAPPaymentStatusPaidButUnverified  // 已支付，但尚未验证成功
};

typedef NS_ENUM(NSInteger, NoxIAPSubscriptionTimeLimit) {
    NoxIAPSubscriptionTimeLimitOneWeek,
    NoxIAPSubscriptionTimeLimitOneMonth,
    NoxIAPSubscriptionTimeLimitTwoMonths,
    NoxIAPSubscriptionTimeLimitThreemonths,
    NoxIAPSubscriptionTimeLimitHalfYear,
    NoxIAPSubscriptionTimeLimitOneYear
};

typedef NS_ENUM(NSInteger, NoxIAPProductType) {
    /// 消耗型
    NoxIAPProductTypeConsumables = 0,
    /// 非消耗型
    NoxIAPProductTypeNonConsumables = 1,
    /// 非续期订阅
    NoxIAPProductTypeNonRenewingSubscriptions = 2,
    /// 自动续期订阅
    NoxIAPProductTypeAutoRenewableSubscriptions = 3
};

#endif /* NoxIAPConst_h */
