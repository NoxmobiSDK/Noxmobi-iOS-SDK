//
//	NoxConnectorProtocol.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/7/13.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxAdapterProtocol, NoxImpressionLevelRevenueData;

@protocol NoxConnectorProtocol <NSObject>
@optional

- (NSString *)adPlatform;
- (NSInteger)adType;
- (NSString *)appKey;
- (NSString *)apiToken;
- (NSString *)placementID;
- (UIViewController * __nullable)rootViewController;

- (BOOL)mutedStart;
- (BOOL)testModeEnable;
- (BOOL)fbATTEnable;
- (BOOL)maxATTEnable;

@property (nonatomic, weak) id<NoxConnectorProtocol> delegate;

#pragma mark - Delegate

- (void)noxAdDidLoad:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdFailedToLoad:(NSError *)error adapter:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdWillShow:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdDidShow:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdFailedToShow:(NSError *)error adapter:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdDidClick:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdWillClose:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdDidClose:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdDidRewarded:(id<NoxAdapterProtocol>)adapter;
- (void)noxAdDidStartPlaying:(id<NoxAdapterProtocol>)adapter;
- (void)noxNaitveAdDidLoad:(id)nativeAd adapter:(id<NoxAdapterProtocol>)adapter;
// v2.18.0新增展示级收入统计
- (void)noxDidReceiveILRData:(id<NoxImpressionLevelRevenueData>)data;

@end

NS_ASSUME_NONNULL_END
