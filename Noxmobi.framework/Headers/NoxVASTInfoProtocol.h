//
//  NoxVASTInfoProtocol.h
//  Noxmobi
//
//  Created by nox_chong on 2021/7/6.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxVASTCompanionProtocol;

@protocol NoxVASTInfoProtocol <NSObject>

#pragma mark - 主要输出结果

// 广告标题
@property (nonatomic, copy) NSString *adTitle;
// 观看多少秒可跳过此广告(可能为空)
@property (nonatomic, assign) NSTimeInterval linearSkipoffset;
// 播放时长
@property (nonatomic, assign) NSTimeInterval duration;
// 展现打点
@property (nonatomic, strong) NSMutableArray *impressionURLs;
// 点击跳转(可能为空)
@property (nonatomic, strong) NSURL *clickThroughURL;
// 点击打点(可能为空)
@property (nonatomic, strong) NSMutableArray *clickTrackingURLs;
// 媒体文件URL（最终拿一个出来）
@property (nonatomic, strong) NSURL *mediaFileURL;
// endcardURL（随播广告中的图片、追踪链接数组等，最终拿一个出来）
@property (nonatomic, strong) id<NoxVASTCompanionProtocol> endcardInfo;
// 最终宽
@property (nonatomic, assign) NSInteger width;
// 最终高
@property (nonatomic, assign) NSInteger height;

#pragma mark - 次要输出结果

// Wrapper包装的下一层链接
@property (nonatomic, strong) NSString *vastAdTagURI;
// VAST协议版本号
@property (nonatomic, copy) NSString *vastVersion;
// 播放进度打点：0/4
@property (nonatomic, strong) NSMutableArray *startURLs;
// 播放进度打点：1/4
@property (nonatomic, strong) NSMutableArray *firstQuartileURLs;
// 播放进度打点：2/4
@property (nonatomic, strong) NSMutableArray *midpointURLs;
// 播放进度打点：3/4
@property (nonatomic, strong) NSMutableArray *thirdQuartileURLs;
// 播放进度打点：4/4
@property (nonatomic, strong) NSMutableArray *completeURLs;
// 广告关闭打点
@property (nonatomic, strong) NSMutableArray *closeURLs;
// 广告静音打点
@property (nonatomic, strong) NSMutableArray *muteURLs;
// 广告非静音打点
@property (nonatomic, strong) NSMutableArray *unmuteURLs;

@end

NS_ASSUME_NONNULL_END
