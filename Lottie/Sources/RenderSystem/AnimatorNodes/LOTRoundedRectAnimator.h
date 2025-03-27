//
//  LOTRoundedRectAnimator.h
//  Lottie
//
//  Created by brandon_withrow on 7/19/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <LottieLegacy/LOTAnimatorNode.h>
#import <LottieLegacy/LOTShapeRectangle.h>

@interface LOTRoundedRectAnimator : LOTAnimatorNode

- (instancetype _Nonnull)initWithInputNode:(LOTAnimatorNode *_Nullable)inputNode
                                shapeRectangle:(LOTShapeRectangle *_Nonnull)shapeRectangle;


@end
