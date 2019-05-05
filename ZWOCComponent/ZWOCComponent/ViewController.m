//
//  ViewController.m
//  ZWOCComponent
//
//  Created by zhouwei on 2019/4/26.
//  Copyright © 2019年 zhouwei. All rights reserved.
//

#import "ViewController.h"
#import "WebViewViewController.h"
#import <WebKit/WebKit.h>
#import "PictureBrowerViewController.h"
#import "ZWVerifyCodeCursorView.h"
#import "CommonDefine.h"
#import "PickerViewController.h"
#import "PickerViewController2.h"
#import "BRAddressPickerView.h"
#import "NSDate+Date.h"
#import <YYKit/YYKit.h>
#import "CDDEmptView.h"
#import "LimitCountTextField.h"
#import "ZWTextView.h"
#import "AXRatingView.h"
#import "CommentView.h"
@interface ViewController ()


@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
  
    CommentView *commnetView = [[CommentView alloc]initWithFrame:CGRectMake(0, kScreenHeight-64-40, KScreenWidth, 40)];
    commnetView.backgroundColor = [UIColor redColor];
    [self.view addSubview:commnetView];
}

//- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
//
//}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
