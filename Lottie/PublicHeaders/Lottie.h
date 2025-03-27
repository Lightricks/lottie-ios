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
#import <LottieLegacy/LOTAnimationTransitionController.h>
#import <LottieLegacy/LOTAnimatedSwitch.h>
#import <LottieLegacy/LOTAnimatedControl.h>
#endif

#if TARGET_OS_IPHONE || TARGET_OS_SIMULATOR
#import <LottieLegacy/LOTCacheProvider.h>
#endif

#import <LottieLegacy/LOTAnimationView.h>
#import <LottieLegacy/LOTAnimationCache.h>
#import <LottieLegacy/LOTComposition.h>
#import <LottieLegacy/LOTBlockCallback.h>
#import <LottieLegacy/LOTInterpolatorCallback.h>
#import <LottieLegacy/LOTValueCallback.h>
#import <LottieLegacy/LOTValueDelegate.h>

#endif /* Lottie_h */
