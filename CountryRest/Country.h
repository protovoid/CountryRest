//
//  Country.h
//  CountryRest
//
//  Created by Chad on 10/7/14.
//  Copyright (c) 2014 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Country : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *capital;
@property (nonatomic, strong) NSString *region;
@property (nonatomic, strong) NSNumber *population;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
