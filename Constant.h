//
//  Constant.h
//  UIViewAddition
//
//  Created by Frank on 16/6/15.
//  Copyright © 2016年 Frank. All rights reserved.
//

#ifndef Constant_h
#define Constant_h

// window
#define kKeyWindow [UIApplication sharedApplication].keyWindow

// screen frame
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height

// tabbar
#define kDelegate [[UIApplication sharedApplication] delegate]

// bundle
#define kVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define kBuildVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]

// device
#define kDeviceName [[UIDevice currentDevice] name]
#define kDeviceModel [[UIDevice currentDevice] model]
#define kDeviceLocalizedModel [[UIDevice currentDevice] localizedModel]
#define kDeviceSystemName [[UIDevice currentDevice] systemName]
#define kDeviceSystemVersion [[UIDevice currentDevice] systemVersion]
#define kDeviceOrientation [[UIDevice currentDevice] orientation]

// color
#define kColor_RGBA (red, green, blue, alpha) [UIColor colorWithRed:red green:green blue:blue alpha:alpha]
#define kColor_RGB (red, green, blue, alpha) kColor_RGBA(red, green, blue, 1.0f)
#define kColor_HexString_Alpha(rgbValue, alpha) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:alpha]
#define kColor_HexString(rgbValue) kColor_HexString_Alpha(rgbValue, 1.0f)

// font
#define kFont(fontSize) [UIFont systemFontOfSize:fontSize]

// userdefault
#define kUserDefaults [NSUserDefaults standardUserDefaults]

// image
#define kImageNamed(imageName) [UIImage imageNamed:imageName]

// log
#ifdef DEBUG
#define DEBUG_NSLOG(fmt, ...) NSLog((@"\n\n[Function Name]:%s\n" "[Line Number]:%d\n\n" fmt), __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DEBUG_NSLOG(...)
#endif

#endif /* Constant_h */

