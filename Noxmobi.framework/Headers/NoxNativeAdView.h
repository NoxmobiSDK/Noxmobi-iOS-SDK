//
//  NoxNativeAdView.h
//  Noxmobi
//
//  Created by Chong on 2020/3/10.
//  Copyright © 2020 Chong. All rights reserved.
//

#import <Noxmobi/NoxBaseComponent.h>
#import <Noxmobi/NoxTemplateStyle.h>

NS_ASSUME_NONNULL_BEGIN

@class  NoxNativeMediaView,
        NoxNativeIconView,
        NoxNativeAdChoicesView;

@interface NoxNativeAdView : NoxBaseComponent

@property (nonatomic, strong, readonly) NoxNativeMediaView *mediaView;
@property (nonatomic, strong, readonly) NoxNativeIconView *iconView;
@property (nonatomic, strong, readonly) NoxNativeAdChoicesView *adChoicesView;
@property (nonatomic, strong, readonly) UILabel *headlineLabel;       // 主标题
@property (nonatomic, strong, readonly) UILabel *advertiserLabel;     // 赞助商名称
@property (nonatomic, strong, readonly) UILabel *bodyTextLabel;       // 广告正文
@property (nonatomic, strong, readonly) UIButton *callToActionButton; // 行动号召
@property (nonatomic, strong, readonly) UILabel *socialContext;       // 社交信息（Admob无）
@property (nonatomic, strong, readonly) UILabel *priceLabel;          // App售价（FB无）
@property (nonatomic, strong, readonly) UILabel *storeView;           // 应用商店名称（FB无）
@property (nonatomic, assign, readonly) NoxTemplateStyle templateStyle;  // 模板样式
@property (nonatomic, strong) UILabel *adTag; // AD标识

- (instancetype)initWithFrame:(CGRect)frame templateStyle:(NoxTemplateStyle)templateStyle;

@end

NS_ASSUME_NONNULL_END
