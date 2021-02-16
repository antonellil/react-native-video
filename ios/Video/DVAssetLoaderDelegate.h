//
//  DVAssetLoaderDelegate.h
//

#import <AVFoundation/AVAssetResourceLoader.h>
#import "DVAssetLoaderDelegatesDelegate.h"

@interface DVAssetLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

+ (NSString *)scheme;
- (instancetype)initWithURL:(NSURL *)url NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype) new NS_UNAVAILABLE;

@property (nonatomic, weak) NSObject<DVAssetLoaderDelegatesDelegate> *delegate;
@property (nonatomic) NSURLSession *session;
@property (nonatomic) NSTimeInterval networkTimeout;

- (void)cancelRequests;

@end
