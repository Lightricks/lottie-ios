//
//  LOTRenderNode.h
//  Pods
//
//  Created by brandon_withrow on 6/27/17.
//
//

#import <Lottie-Legacy/LOTAnimatorNode.h>

@interface LOTRenderNode : LOTAnimatorNode

@property (nonatomic, readonly, strong) CAShapeLayer * _Nonnull outputLayer;

- (NSDictionary * _Nonnull)actionsForRenderLayer;

@end
