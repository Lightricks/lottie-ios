//
//  LOTMask.h
//  LottieAnimator
//
//  Created by Brandon Withrow on 12/14/15.
//  Copyright © 2015 Brandon Withrow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LottieLegacy/LOTKeyframe.h>

typedef enum : NSUInteger {
  LOTMaskModeAdd,
  LOTMaskModeSubtract,
  LOTMaskModeIntersect,
  LOTMaskModeUnknown
} LOTMaskMode;

@interface LOTMask : NSObject

- (instancetype _Nonnull)initWithJSON:(NSDictionary * _Nonnull)jsonDictionary;

@property (nonatomic, readonly) BOOL closed;
@property (nonatomic, readonly) BOOL inverted;
@property (nonatomic, readonly) LOTMaskMode maskMode;
@property (nonatomic, readonly, nullable) LOTKeyframeGroup *maskPath;
@property (nonatomic, readonly, nullable) LOTKeyframeGroup *opacity;
@property (nonatomic, readonly, nullable) LOTKeyframeGroup *expansion;
@end
