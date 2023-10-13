
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNPerfectLibSpec.h"

@interface PerfectLib : NSObject <NativePerfectLibSpec>
#else
#import <React/RCTBridgeModule.h>

@interface PerfectLib : NSObject <RCTBridgeModule>
#endif

@end
