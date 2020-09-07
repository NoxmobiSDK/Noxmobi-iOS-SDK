//
//  NoxAdSize.h
//  MyTestTool
//
//  Created by Chong on 2019/1/21.
//  Copyright © 2019年 Chong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Noxmobi/NoxmobiDefines.h>

NS_ASSUME_NONNULL_BEGIN

struct NoxAdSize {
    CGSize size;
};

struct NoxAdFrame {
    CGPoint origin;
    struct NoxAdSize size;
};

typedef struct NoxAdSize NoxAdSize;
typedef struct NoxAdFrame NoxAdFrame;

/**
 * 小型Banner尺寸
 */
extern NoxAdSize const kNoxAdSize320x50;

/**
 * 中等Banner尺寸
 */
extern NoxAdSize const kNoxAdSize320x100;

/**
 * 中矩形Banner尺寸
 */
extern NoxAdSize const kNoxAdSize300x250;

/**
 * 通过CGSize获得自定广告尺寸
 */
NOX_EXTERN NoxAdSize NoxAdSizeFromCGSize(CGSize size);

/**
 自定义Banner广告frame
 
 例如：
 NoxAdFrame adFrame = NoxMakeAdFrame(12, 34, kNoxAdSize320x100);
    x = 12, y = 34, width = 320, height = 100
 */
extern NoxAdFrame NoxMakeAdFrame(CGFloat x, CGFloat y, NoxAdSize size);

NS_ASSUME_NONNULL_END
