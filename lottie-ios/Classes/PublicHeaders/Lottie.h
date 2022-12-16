//
//  Lottie.h
//  Pods
//
//  Created by brandon_withrow on 1/27/17.
//
//  Dream Big.

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

#ifndef Lottie_h
#define Lottie_h

//! Project version number for Lottie.
FOUNDATION_EXPORT double LottieVersionNumber;

//! Project version string for Lottie.
FOUNDATION_EXPORT const unsigned char LottieVersionString[];

#include <TargetConditionals.h>

#if TARGET_OS_IPHONE || TARGET_OS_SIMULATOR
#import <Lottie-Legacy/LOTAnimationTransitionController.h>
#import <Lottie-Legacy/LOTAnimatedSwitch.h>
#import <Lottie-Legacy/LOTAnimatedControl.h>
#endif

#if TARGET_OS_IPHONE || TARGET_OS_SIMULATOR
#import <Lottie-Legacy/LOTCacheProvider.h>
#endif

#import <Lottie-Legacy/LOTAnimationView.h>
#import <Lottie-Legacy/LOTAnimationCache.h>
#import <Lottie-Legacy/LOTComposition.h>
#import <Lottie-Legacy/LOTBlockCallback.h>
#import <Lottie-Legacy/LOTInterpolatorCallback.h>
#import <Lottie-Legacy/LOTValueCallback.h>
#import <Lottie-Legacy/LOTValueDelegate.h>

#endif /* Lottie_h */
