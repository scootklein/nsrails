//
//  Post.h
//  NSRailsApp
//
//  Created by Dan Hassin on 2/20/12.
//  Copyright (c) 2012 InContext LLC. All rights reserved.
//

#import "NSRails.h"

@interface Post : NSRRemoteObject

@property (nonatomic, strong) NSMutableArray *responses;
@property (nonatomic, strong) NSString *author, *content;
@property (nonatomic, strong) NSDate *createdAt;

@end
