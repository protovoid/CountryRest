//
//  NetworkController.m
//  CountryRest
//
//  Created by Chad on 10/7/14.
//  Copyright (c) 2014 DevMountain. All rights reserved.
//

#import "NetworkController.h"

@implementation NetworkController

+ (AFHTTPSessionManager *)api {
    
    static AFHTTPSessionManager *api = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        api = [[AFHTTPSessionManager alloc] initWithBaseURL:[NSURL URLWithString:@"http://restcountries.eu/rest/v1/"]];
        
        // means we are expecting to get JSON type of response from the URL
        api.responseSerializer = [AFJSONResponseSerializer serializer];
        
    });
    return api;
}

@end
