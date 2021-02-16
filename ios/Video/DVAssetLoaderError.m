//
//  DVAssetLoaderError.m
//

#import "DVAssetLoaderError.h"

@implementation DVAssetLoaderError

+ (instancetype)loaderErrorWithError:(NSError *)error {
    return [[DVAssetLoaderError alloc] initWithError:error];
}

- (instancetype)initWithError:(NSError *)error {
    if (self = [super init]) {
        _error = error;
        _date = [NSDate date];
    }

    return self;
}

@end
