//
//  AppDelegate.h
//  MSCustomTabBarController
//
//  Created by MrSong on 16/6/7.
//  Copyright © 2016年 MrSong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MSTabBarController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
// 如果需要全局访问tabBarController,可以把属性定义在这，在需要访问的地方这么访问
// id delegate = [[UIApplication sharedApplication].delegate tabBarController];
// MSTabBarController *tabBarController = [delegate tabBarController];
@property (nonatomic, strong) MSTabBarController *tabBarController;


@end

