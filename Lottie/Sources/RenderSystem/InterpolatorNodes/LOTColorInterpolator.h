//
//  LOTColorInterpolator.h
//  Lottie
//
//  Created by brandon_withrow on 7/13/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <Lottie-Legacy/LOTValueInterpolator.h>
#import <Lottie-Legacy/LOTPlatformCompat.h>
#import <Lottie-Legacy/LOTValueDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface LOTColorInterpolator : LOTValueInterpolator

- (CGColorRef)colorForFrame:(NSNumber *)frame;

@property (nonatomic, weak, nullable) id<LOTColorValueDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
