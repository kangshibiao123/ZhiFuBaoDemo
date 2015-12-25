//
//  AppDelegate.m
//  123456543213456432
//
//  Created by 康世标 on 15/9/15.
//  Copyright (c) 2015年 康世标. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <AlipaySDK/AlipaySDK.h>

//
@interface Product : NSObject{
@private
    float     _price;
    NSString *_subject;
    NSString *_body;
    NSString *_orderId;
}

@property (nonatomic, assign) float price;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *orderId;

@end

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *productTableView;

@property(nonatomic, strong)NSMutableArray *productList;

@end

