//
//  CountryController.h
//  CountryRest
//
//  Created by Chad on 10/7/14.
//  Copyright (c) 2014 DevMountain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Country.h"


@interface CountryController : NSObject

+ (CountryController *)sharedInstance;

- (void)getCountriesWithName:(NSString *)name completion:(void (^)(NSArray *countries))completion;


@end
