//
//  NoxVASTConnectorProtocol.h
//  AVPlayerTest
//
//  Created by nox_chong on 2021/3/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol NoxVASTConnectorProtocol <NSObject>

- (void)GET:(NSString *)url handler:(nullable void(^)(BOOL succeed, id response))handler;
- (void)download:(NSURL *)url complete:(void(^)(NSURL *fileURL, NSError *error))complete;

@end

NS_ASSUME_NONNULL_END
