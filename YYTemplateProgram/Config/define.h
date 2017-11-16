//
//  define.h
//  YYTemplateProgram
//
//  Created by Moon on 2017/11/15.
//  Copyright © 2017年 MoMo. All rights reserved.
//

#ifndef define_h
#define define_h

/**
 屏幕宽高
 */
#define kSCREENWIDTH [[UIScreen mainScreen] bounds].size.width
#define kSCREENHEIGHT [[UIScreen mainScreen] bounds].size.height
#define kTabbarHeight 49

/**
 主色调
 */
#define kRGBAColor(r, g, b, a)               [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define kRGBColor(r, g, b)                   kRGBAColor((r), (g), (b), 1.0)
#define kWhiteColorAlpha(white, _alpha)      [UIColor colorWithWhite:(white)/255.0 alpha:_alpha]
#define kWhiteColor(white)                   kWhiteColorAlpha(white, 1.0)
#define kRootColor kRGBColor(253,129,164)

/**
 主字体
 */
#define kFont(fontSize) [UIFont fontWithName:@"ArialMT" size:fontSize]

/**
 弱/强引用
 */
#define weakSelf(type)  __weak typeof(type) weak##type = type;
#define strongSelf(type)  __strong typeof(type) type = weak##type;

/**
 文件目录
 */
#define kDOCUMENT_DIRECTORY NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject

/**
  APP名字
 */
#define kAPP_NAME    ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleName"])
/**
 APP版本号
 */
#define kAPP_VERSION ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"])
#define kAPP_BUILD   ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"])

/**
 高效率的 NSLog
 */
#ifdef DEBUG
#define DLog(...) NSLog(@"%s 第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else
#define DLog(...)
#endif

/**
 获取当前语言
 */
#define LRCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

////使用 ARC 和 MRC
//#if __has_feature(objc_arc)
//// ARC
//#else
//// MRC
//#endif

#endif /* define_h */
