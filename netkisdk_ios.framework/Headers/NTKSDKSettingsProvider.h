//
//  NTKSDKSettingsProvider.h
//  netkisdk-ios
//
//  Created by Admin on 3/25/20.
//  Copyright © 2020 Netki, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTKSDKSettingsProvider : NSObject
@property (assign, nonatomic) BOOL showLayPhoneFlatLabel;
@property (assign, nonatomic) BOOL showMovePhoneCloserLabel;

@property (assign, nonatomic) float captureButtonAppearanceInterval;

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
