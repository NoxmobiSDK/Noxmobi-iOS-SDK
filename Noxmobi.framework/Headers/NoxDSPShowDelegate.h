//
//  NoxDSPShowDelegate.h
//  AVPlayerTest
//
//  Created by nox_chong on 2021/3/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxDSPShowDelegate <NSObject>

@optional
// 即将展示
- (void)dspAdWillShow;
// 已展示
- (void)dspAdDidShow;
// 展示失败
- (void)dspAdFailedToShow:(NSError *)error;
// 已点击
- (void)dspAdDidClicked;
// 获得奖励
- (void)dspAdDidEarnedReward;
// 即将关闭
- (void)dspAdWillClose;
// 已关闭
- (void)dspAdDidClosed;
@end

NS_ASSUME_NONNULL_END
