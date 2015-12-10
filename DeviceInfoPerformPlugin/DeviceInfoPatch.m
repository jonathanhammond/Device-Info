//
//  DeviceInfoPatch.m
//  DeviceInfo
//
//  Created by Jon Hammond on 10/12/2015.
//  Copyright © 2015 Jon Hammond. All rights reserved.
//

#import "DeviceInfoPatch.h"

@implementation DeviceInfoPatch

- (void)processPatchWithContext:(PMRProcessContext *)context {
    UIDevice *deviceName = [[UIDevice currentDevice] name];
    _name.stringValue = deviceName;
    NSLog(deviceName);
    
    UIDevice *deviceSystemName = [[UIDevice currentDevice] systemName];
    // NSString *systemNameInfoString = systemNameInfo;
    _systemName.stringValue = deviceSystemName;
    
    UIDevice *deviceSystemVersion = [[UIDevice currentDevice] systemVersion];
    //  NSString *systemVersionInfoString = systemNameInfo;
    _systemVersion.stringValue = deviceSystemVersion;
    
    UIDevice *deviceModel = [[UIDevice currentDevice] model];
    _model.stringValue = deviceModel;
    NSLog(deviceModel);
    
    UIDevice *myDevice = [UIDevice currentDevice];
    [myDevice setBatteryMonitoringEnabled:YES];
    
    
    float batLeft = [myDevice batteryLevel];
    int i=[myDevice batteryState];
    
    int batinfo=(batLeft*100);
    
    NSLog(@"Battry Level is :%d and Battery Status is :%d",batinfo,i);
    
    switch (i)
    {
        case UIDeviceBatteryStateUnplugged:
            
        {
            _batteryLevel.stringValue = @"Unplugged";
            
            //[BCStatus setText:NSLocalizedString(@"UnpluggedKey", @"")];
            break;
        }
        case UIDeviceBatteryStateCharging:
        {
            
            _batteryLevel.stringValue = @"Charging";
            
            //[BCStatus setText:NSLocalizedString(@"UnpluggedKey", @"")];
            // [BCStatus setText:NSLocalizedString(@"ChargingKey", @"")];
            break;
        }
        case UIDeviceBatteryStateFull:
        {
            // [BCStatus setText:NSLocalizedString(@"FullKey", @"")];
            _batteryLevel.stringValue = @"StateFull" ;
            break;
        }
        default:
        {
            _batteryLevel.stringValue = @"Unknown" ;
            // [BCStatus setText:NSLocalizedString(@"UnknownKey", @"")];
            break;
        }
    }
    
    
    //  NSLog(@"Battry Level is :%d and Battery Status is :%d",batinfo,i);
    
    
}
@end