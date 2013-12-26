//
//  RACUnionMutation.h
//  ReactiveCocoa
//
//  Created by Justin Spahr-Summers on 2013-12-26.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "RACCollectionMutation.h"

@interface RACUnionMutation : NSObject <RACCollectionMutation>

@property (nonatomic, copy, readonly) NSArray *addedObjects;

- (instancetype)initWithObjects:(NSArray *)objects;

@end