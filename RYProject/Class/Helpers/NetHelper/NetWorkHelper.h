//
//  NetWorkHelper.h
//  RYProject
//
//  Created by rnl on 2019/8/23.
//  Copyright © 2019 rnl. All rights reserved.
//

#import "AFHTTPSessionManager.h"

typedef NS_ENUM(NSUInteger,NetWorkHTTPMethod) {
    GET = 0,
    POST,
};

typedef NS_ENUM(NSUInteger,NetWorkQNImageMethod) {
    PHASSET = 0,
    DATA,
};

NS_ASSUME_NONNULL_BEGIN

@interface NetWorkHelper : AFHTTPSessionManager

@end

NS_ASSUME_NONNULL_END
