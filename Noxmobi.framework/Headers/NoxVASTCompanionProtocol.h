//
//  NoxVASTCompanionProtocol.h
//  Noxmobi
//
//  Created by nox_chong on 2021/7/6.
//  Copyright © 2021 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxVASTCompanionProtocol <NSObject>

#pragma mark - 标签属性
    
// 随播广告的宽
@property (nonatomic, assign) CGFloat width;
// 随播广告的高
@property (nonatomic, assign) CGFloat height;


#pragma mark - 子节点

// endcard素材链接
@property (nonatomic, strong) NSURL *endcardURL;
// 一般跳转链接只有一个，而且跟主广告的ClickThrough一致
@property (nonatomic, strong) NSURL *companionClickThroughURL;
// creativeView追踪链接数组
@property (nonatomic, strong) NSMutableArray *creativeViewTrackingURLs;
// 需要二次解析
@property (nonatomic, strong) NSString *HTMLResource;

#pragma mark - 功能属性

// 忽略此Companion，前面已有Companion的宽高比此Companion更匹配标准尺寸
@property (nonatomic, assign) BOOL ignore;

#pragma mark - 解析HTMLResource
- (void)parseHTMLResource;

@end

NS_ASSUME_NONNULL_END
