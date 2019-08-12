//
//  NoxAdSize.h
//  MyTestTool
//
//  Created by nox_chong on 2019/1/21.
//  Copyright © 2019年 Chong_Nox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoxmobiDefines.h"

NS_ASSUME_NONNULL_BEGIN

struct NoxAdSize {
    CGSize size;
};

typedef struct NoxAdSize NoxAdSize;

/**
 * 小型Banner尺寸
 */
NOX_EXTERN NoxAdSize const kNoxAdSize320x50;

/**
 * 中等Banner尺寸
 */
NOX_EXTERN NoxAdSize const kNoxAdSize320x100;

/**
 * 中矩形Banner尺寸
 */
NOX_EXTERN NoxAdSize const kNoxAdSize300x250;



NS_ASSUME_NONNULL_END
