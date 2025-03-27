//
//  LOTPolygonAnimator.h
//  Lottie
//
//  Created by brandon_withrow on 7/27/17.
//  Copyright © 2017 Airbnb. All rights reserved.
//

#import <Lottie-Legacy/LOTAnimatorNode.h>
#import <Lottie-Legacy/LOTShapeStar.h>

@interface LOTPolygonAnimator : LOTAnimatorNode

- (instancetype _Nonnull)initWithInputNode:(LOTAnimatorNode *_Nullable)inputNode
                             shapePolygon:(LOTShapeStar *_Nonnull)shapeStar;

@end
