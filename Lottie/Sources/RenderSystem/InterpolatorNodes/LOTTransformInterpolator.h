//
//  LOTTransformInterpolator.h
//  Lottie
//
//  Created by brandon_withrow on 7/18/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Lottie-Legacy/LOTNumberInterpolator.h>
#import <Lottie-Legacy/LOTPointInterpolator.h>
#import <Lottie-Legacy/LOTSizeInterpolator.h>
#import <Lottie-Legacy/LOTKeyframe.h>
#import <Lottie-Legacy/LOTLayer.h>

NS_ASSUME_NONNULL_BEGIN

@interface LOTTransformInterpolator : NSObject

+ (instancetype)transformForLayer:(LOTLayer *)layer;

- (instancetype)initWithPosition:(NSArray <LOTKeyframe *> *)position
                        rotation:(NSArray <LOTKeyframe *> *)rotation
                          anchor:(NSArray <LOTKeyframe *> *)anchor
                           scale:(NSArray <LOTKeyframe *> *)scale;

- (instancetype)initWithPositionX:(NSArray <LOTKeyframe *> *)positionX
                        positionY:(NSArray <LOTKeyframe *> *)positionY
                         rotation:(NSArray <LOTKeyframe *> *)rotation
                           anchor:(NSArray <LOTKeyframe *> *)anchor
                            scale:(NSArray <LOTKeyframe *> *)scale;

@property (nonatomic, strong) LOTTransformInterpolator * inputNode;

@property (nonatomic, readonly) LOTPointInterpolator *positionInterpolator;
@property (nonatomic, readonly) LOTPointInterpolator *anchorInterpolator;
@property (nonatomic, readonly) LOTSizeInterpolator *scaleInterpolator;
@property (nonatomic, readonly) LOTNumberInterpolator *rotationInterpolator;
@property (nonatomic, readonly) LOTNumberInterpolator *positionXInterpolator;
@property (nonatomic, readonly) LOTNumberInterpolator *positionYInterpolator;
@property (nonatomic, strong, nullable) NSString *parentKeyName;

- (CATransform3D)transformForFrame:(NSNumber *)frame;
- (BOOL)hasUpdateForFrame:(NSNumber *)frame;

@end

NS_ASSUME_NONNULL_END
