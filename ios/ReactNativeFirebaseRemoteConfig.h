#import <Foundation/Foundation.h>
#import "RCTBridgeModule.h"
#import <FirebaseRemoteConfig/FirebaseRemoteConfig.h>

@interface ReactNativeFirebaseRemoteConfig : NSObject <RCTBridgeModule>

@property (strong) FIRRemoteConfig *remoteConfig;

@end
