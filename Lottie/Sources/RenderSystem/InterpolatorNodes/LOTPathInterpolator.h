//
//  LOTPathInterpolator.h
//  Lottie
//
//  Created by brandon_withrow on 7/13/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <LottieLegacy/LOTValueInterpolator.h>
#import <LottieLegacy/LOTPlatformCompat.h>
#import <LottieLegacy/LOTBezierPath.h>
#import <LottieLegacy/LOTValueDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface LOTPathInterpolator : LOTValueInterpolator

- (LOTBezierPath *)pathForFrame:(NSNumber *)frame cacheLengths:(BOOL)cacheLengths;

@property (nonatomic, weak, nullable) id<LOTPathValueDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
