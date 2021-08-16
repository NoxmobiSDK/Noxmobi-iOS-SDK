//
//  NoxVASTManagerProtocol.h
//  AVPlayerTest
//
//  Created by nox_chong on 2021/3/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxDSPShowDelegate, NoxVASTConnectorProtocol, NoxVASTInfoProtocol;

typedef void(^VASTParseComplete)(__nullable id<NoxVASTInfoProtocol>);

@protocol NoxVASTManagerProtocol <NSObject>

// DSP广告展示代理
@property (nonatomic, weak) id<NoxDSPShowDelegate> delegate;
// 链接器（上下文）
@property (nonatomic, strong) id<NoxVASTConnectorProtocol> connector;
// 仅支持插屏和激励，默认插屏
@property (nonatomic, assign) BOOL isRewardVideoAd;
// Promo交叉推广专用，返回解析完成的VASTInfoModel
@property (nonatomic, copy) VASTParseComplete parseComplete;

// 初始化setupVastManager
- (void)setupVastManager;
// 加载解析VAST XML数据，默认目标广告尺寸320x480
- (void)loadVAST:(NSData *)xmlData;
// 展示VAST广告
- (void)showVAST:(UIViewController *)rootViewController;
// Promo交叉推广专用，仅解析VAST数据
- (void)parseVAST:(NSData *)xmlData complete:(VASTParseComplete)complete;

@end

NS_ASSUME_NONNULL_END
