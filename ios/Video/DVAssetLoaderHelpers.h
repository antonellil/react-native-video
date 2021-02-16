//
//  DVAsserLoaderHelpers.h
//

#import <Foundation/Foundation.h>

extern NSString *rangeFromRequest(NSURLRequest *request);
extern NSString *rangeFromResponse(NSHTTPURLResponse *response);
extern NSData *concatedDataFromRanges(NSDictionary<NSValue *, NSData *> *dataRanges, long long fullLength);
