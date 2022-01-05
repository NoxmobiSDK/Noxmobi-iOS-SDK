//
//  NoxImpressionLevelRevenueData.h
//  Noxmobi
//
//  Created by nox_chong on 2021/12/22.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxImpressionLevelRevenueData <NSObject>

@property (nonatomic, copy) NSString *placementID;// nox pid
@property (nonatomic, copy) NSString *mediationName;// MaxMediation、NoxMediation、ISMediation
@property (nonatomic, copy) NSString *mediationPID;// max pid、nox pid、is pid（配置下发什么填什么），从配置里拿到
@property (nonatomic, copy) NSString *networkName;// 展示的Network名称
@property (nonatomic, copy) NSString *networkPID;// 展示的Network pid
@property (nonatomic, copy) NSString *precision;// ISMediation有，Max没有，写个默认，200也没有
@property (nonatomic, assign) int adType;
@property (nonatomic, assign) double revenue;
// IS和MAX都没有这个字段传'USD'，MoPub和Admob有，将来扩展需要时可以在Adapter侧传递过来，
@property (nonatomic, copy) NSString *currency;

@end

NS_ASSUME_NONNULL_END
