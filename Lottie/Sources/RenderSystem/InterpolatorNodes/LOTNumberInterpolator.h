//
//  LOTNumberInterpolator.h
//  Lottie
//
//  Created by brandon_withrow on 7/11/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Lottie-Legacy/LOTValueInterpolator.h>
#import <Lottie-Legacy/LOTValueDelegate.h>

NS_ASSUME_NONNULL_BEGIN
@interface LOTNumberInterpolator : LOTValueInterpolator

- (CGFloat)floatValueForFrame:(NSNumber *)frame;

@property (nonatomic, weak, nullable) id<LOTNumberValueDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
