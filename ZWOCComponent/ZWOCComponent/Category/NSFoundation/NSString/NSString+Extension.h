//
//  NSString+Extension.h
//  ZWOCComponent
//
//  Created by zhouwei on 2019/5/5.
//  Copyright © 2019年 zhouwei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Extension)

/**
 电话号码中间4位*显示
 @param phoneNum 电话号码
 @return 135*****262
 */
+ (NSString*)getSecrectStringWithPhoneNumber:(NSString*)phoneNum;


/**
 银行卡号中间8位*显示
 @param accountNo 银行卡号
 @return return value description
 */
+ (NSString*)getSecrectStringWithAccountNo:(NSString*)accountNo;


/**
 转为手机格式，默认为-
 
 @param mobile 手机号
 @return return value description
 */
+ (NSString*)stringMobileFormat:(NSString*)mobile;

//数组中文格式（几万）可自行添加
/**
 金额数字添加单位（暂时写了万和亿，有更多的需求请参考写法来自行添加）
 
 @param value 金额
 @return return value description
 */
+ (NSString*)stringChineseFormat:(double)value;


/**
 添加数字的千位符
 @param num num description
 @return return value description
 */
+ (NSString*)countNumAndChangeformat:(NSString *)num;

/**
 *  NSString转为NSNumber
 *
 *  @return NSNumber
 */
- (NSNumber*)toNumber;


/**
 抹除小数末尾的0
 @return return value description
 */
- (NSString*)removeUnwantedZero;

/**
 //去掉前后空格
 @return return value description
 */
- (NSString*)trimmedString;

@end
