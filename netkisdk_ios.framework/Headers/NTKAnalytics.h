//
//  NTKAnalytics.h
//  netkisdk-ios
//
//  Created by Admin on 7/22/19.
//  Copyright © 2019 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKAnalytics : NSObject

+ (instancetype)sharedInstance;

- (void)trackEvent:(NSString *)eventType properties:(NSDictionary * _Nullable)properties;
- (void)trackEvent:(NSString *)eventType error:(NSError *)error properties:(NSDictionary * _Nullable)properties;

@end

NS_ASSUME_NONNULL_END
