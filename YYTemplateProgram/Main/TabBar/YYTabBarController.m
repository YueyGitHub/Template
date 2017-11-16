//
//  YYTabBarController.m
//  YYTemplateProgram
//
//  Created by Moon on 2017/11/15.
//  Copyright © 2017年 MoMo. All rights reserved.
//

#import "YYTabBarController.h"
#import "YYHomeViewController.h"
#import "YYMineViewController.h"

@interface YYTabBarController ()

@end

@implementation YYTabBarController


- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupChildVC];
}

- (void)setupChildVC {
    
    YYHomeViewController *vc1 = [[YYHomeViewController alloc] init];
    [self setupChildrenController:vc1 image:@"home_home_tab" selectedImage:@"home_home_tab_s" title:@"首页"];

    YYMineViewController *vc2 = [[YYMineViewController alloc] init];
    [self setupChildrenController:vc2 image:@"home_mine_tab" selectedImage:@"home_mine_tab_s" title:@"我的"];
//
//    ViewController *vc3 = [[ViewController alloc] init];
//    [self setupChildrenController:vc3 image:@"tabbar_3" selectedImage:@"tabbar_3" title:@"发现"];
//
//    ViewController *vc4 = [[ViewController alloc] init];
//    [self setupChildrenController:vc4 image:@"tabbar_4" selectedImage:@"tabbar_4" title:@"我的"];
}

- (void)setupChildrenController:(UIViewController *)vc image:(NSString *)image selectedImage:(NSString *)selectedImage title:(NSString *)title {
    
    vc.view.backgroundColor = [UIColor whiteColor];
    UINavigationController *navi = [[UINavigationController alloc] initWithRootViewController:vc];
    
    UIImage *tabImage = [UIImage imageNamed:image];
    UIImage *tabSelectedImage = [UIImage imageNamed:selectedImage];
    
    tabImage = [tabImage imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    tabSelectedImage = [tabSelectedImage imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    
    vc.tabBarItem.image = tabImage;
    
    vc.tabBarItem.selectedImage = tabSelectedImage;
    
    vc.tabBarItem.imageInsets = UIEdgeInsetsMake(6, 0, -6, 0);
    
    //    vc.tabBarItem.title = title;
    
    vc.navigationItem.title = title;
    
    [self addChildViewController:navi];
    
    
}


@end
