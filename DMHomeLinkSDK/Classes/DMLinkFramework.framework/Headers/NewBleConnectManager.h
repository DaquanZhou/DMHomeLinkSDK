//
//  NewBleConnectManager.h
//  WiFiConnetSDK
//
//  Created by Albert on 2020/5/13.
//  Copyright © 2020 Coder_zzz. All rights reserved.
//

#import "WiFiBaseManager.h"
#import <CoreBluetooth/CoreBluetooth.h>
#import "BluetoothManager.h"


@interface NewBleConnectManager : WiFiBaseManager

@property (nonatomic, strong) BluetoothManager *bluetooth;

- (void)connectWithPeripheral:(CBPeripheral*)peripheral;

@end

