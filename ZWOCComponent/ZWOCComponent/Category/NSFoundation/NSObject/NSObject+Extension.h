//
//  NSObject+Extension.h
//  ZWOCComponent
//
//  Created by zhouwei on 2019/5/5.
//  Copyright © 2019年 zhouwei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface NSObject (Extension)

/**
 *  为当前object动态增加的分类
 */
@property (nonatomic, strong, readonly) NSMutableArray *associatedObjectNames;

/**
 *  为当前object动态增加分类
 *
 *  @param propertyName   分类名称
 *  @param value  分类值
 *  @param policy 分类内存管理类型
 */
- (void)objc_setAssociatedObject:(NSString *)propertyName value:(id)value policy:(objc_AssociationPolicy)policy;
/**
 *  获取当前object某个动态增加的分类
 *
 *  @param propertyName 分类名称
 *
 *  @return 值
 */
- (id)objc_getAssociatedObject:(NSString *)propertyName;
/**
 *  删除动态增加的所有分类
 */
- (void)objc_removeAssociatedObjects;

/**
 *  获取对象的所有属性
 *
 *  @return 属性dict
 */
- (NSArray *)getProperties;


@end
