//
//  MSTabBarView.h
//  MSCustomTabBarController
//
//  Created by MrSong on 16/6/7.
//  Copyright © 2016年 MrSong. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MSTabBarView;

@protocol MSTabBarViewDelegate <NSObject>

- (void)msTabBarView:(MSTabBarView *)view didSelectItemAtIndex:(NSInteger)index;

- (void)msTabBarViewDidClickCenterItem:(MSTabBarView *)view;

@end

@interface MSTabBarView : UIView

@property (nonatomic, weak) id<MSTabBarViewDelegate> viewDelegate;

@end
