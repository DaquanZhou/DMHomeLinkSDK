#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BluetoothManager.h"
#import "HttpRequest.h"
#import "NewBleConnectManager.h"
#import "NewWiFiConnectManager.h"
#import "WiFiBaseManager.h"
#import "WiFiConnectManager.h"

FOUNDATION_EXPORT double DMHomeLinkSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char DMHomeLinkSDKVersionString[];

