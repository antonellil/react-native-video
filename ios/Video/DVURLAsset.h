//
//  DVURLAsset.h
//  DVAssetLoaderDelegate
//

#import <AVFoundation/AVFoundation.h>
#import "DVAssetLoaderDelegatesDelegate.h"

@interface DVURLAsset : AVURLAsset

- (instancetype)initWithURL:(NSURL *)URL options:(NSDictionary<NSString *,id> *)options networkTimeout:(NSTimeInterval)networkTimeout;

@property (nonatomic, weak) NSObject <DVAssetLoaderDelegatesDelegate> *loaderDelegate;

@end
