//
//  LOTPathAnimator.h
//  Pods
//
//  Created by brandon_withrow on 6/27/17.
//
//

#import <Lottie-Legacy/LOTAnimatorNode.h>
#import <Lottie-Legacy/LOTShapePath.h>

@interface LOTPathAnimator : LOTAnimatorNode

- (instancetype _Nonnull)initWithInputNode:(LOTAnimatorNode *_Nullable)inputNode
                                  shapePath:(LOTShapePath *_Nonnull)shapePath;

@end
