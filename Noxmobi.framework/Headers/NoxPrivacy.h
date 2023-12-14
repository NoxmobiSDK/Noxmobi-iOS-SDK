//
//  NoxPrivacy.h
//  Noxmobi
//
//  Created by nox on 2023/12/14.
//  Copyright © 2023 Chong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxPrivacy : NSObject

@property (nonatomic, assign) BOOL          supportPrivacy;
@property (nonatomic, assign) BOOL          testGDPR;
@property (nonatomic, copy, getter = privacyUrl) NSString *privacyUrl;
@property (nonatomic, copy, getter = termsUrl) NSString *termsUrl;

@end

NS_ASSUME_NONNULL_END
