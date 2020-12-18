//
//  NoxBaseModel.h
//  Noxmobi
//
//  Created by Chong on 2019/9/20.
//  Copyright © 2019 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxBaseModel : NSObject

+ (BOOL)isAvailableArray:(id)arr;
+ (BOOL)isAvailableDictionary:(id)dict;

@end

NS_ASSUME_NONNULL_END
