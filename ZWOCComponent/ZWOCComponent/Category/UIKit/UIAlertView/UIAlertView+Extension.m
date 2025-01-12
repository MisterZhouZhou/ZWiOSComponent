//
//  UIAlertView+Extension.m
//  ZWOCComponent
//
//  Created by zhouwei on 2019/5/5.
//  Copyright © 2019年 zhouwei. All rights reserved.
//

#import "UIAlertView+Extension.h"
#import <objc/runtime.h>

static void *MyAlterViewKey = "MyAlterViewKey";

@implementation UIAlertView (Extension)

- (void)showWithBlock:(CopletionBlock)copletionBlock {
    if (copletionBlock) {
        objc_removeAssociatedObjects(self);
        objc_setAssociatedObject(self, MyAlterViewKey, copletionBlock, OBJC_ASSOCIATION_COPY);
        self.delegate = self;
    }
    [self show];
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    CopletionBlock copletionBlock = objc_getAssociatedObject(self, MyAlterViewKey);
    if (copletionBlock) {
        copletionBlock(buttonIndex);
    }
}

@end
