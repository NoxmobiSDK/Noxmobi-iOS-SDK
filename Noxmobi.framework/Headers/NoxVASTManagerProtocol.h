//
//  NoxVASTManagerProtocol.h
//  AVPlayerTest
//
//  Created by nox_chong on 2021/3/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxDSPShowDelegate, NoxVASTConnectorProtocol;

@protocol NoxVASTManagerProtocol <NSObject>

@property (nonatomic, weak) id<NoxDSPShowDelegate> delegate;
@property (nonatomic, strong) id<NoxVASTConnectorProtocol> connector;
// 仅支持插屏和激励，默认插屏
@property (nonatomic, assign) BOOL isRewardVideoAd;
// 加载解析VAST XML数据
- (void)loadVAST:(NSData *)xmlData;
// 展示VAST广告
- (void)showVAST:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
