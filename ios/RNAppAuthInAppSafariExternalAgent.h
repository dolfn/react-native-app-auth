//
//  RNAppAuthLogoutExernalAgent.h
//  react-native-app-auth
//
//  Created by Corneliu on 20/01/2020.
//

#import <Foundation/Foundation.h>
#import "OIDExternalUserAgent.h"

NS_ASSUME_NONNULL_BEGIN

@interface RNAppAuthInAppSafariExternalAgent : NSObject<OIDExternalUserAgent>

- (nullable instancetype)initWithPresentingViewController: (UIViewController *)presentingViewController;

@property (nonatomic, copy, nullable) void (^onLogoutSignInRedirection)(void);

@end

NS_ASSUME_NONNULL_END
