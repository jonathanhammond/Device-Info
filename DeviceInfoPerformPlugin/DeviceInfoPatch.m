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
    // Host ID stuff http://www.makebetterthings.com/iphone/how-to-find-ip-address-of-iphone/
    
    NSString *address = @"error";
    struct ifaddrs *interfaces = NULL;
    struct ifaddrs *temp_addr = NULL;
    int success = 0;
    
    // retrieve the current interfaces - returns 0 on success
    success = getifaddrs(&interfaces);
    if (success == 0) {
        // Loop through linked list of interfaces
        temp_addr = interfaces;
        while (temp_addr != NULL) {
            if( temp_addr->ifa_addr->sa_family == AF_INET) {
                // Check if interface is en0 which is the wifi connection on the iPhone
                if ([[NSString stringWithUTF8String:temp_addr->ifa_name] isEqualToString:@"en0"]) {
                    // Get NSString from C String
                    address = [NSString stringWithUTF8String:inet_ntoa(((struct sockaddr_in *)temp_addr->ifa_addr)->sin_addr)];
                    
                    
                }
            }
            
            temp_addr = temp_addr->ifa_next;
        }
    }
    
    // Free memory
    freeifaddrs(interfaces);
    
    //  return address;
    _hostIP.stringValue = address;
}

@end