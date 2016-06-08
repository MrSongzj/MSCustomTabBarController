//
//  MSVerticalCenterButton.m
//  MSCustomTabBarController
//
//  Created by MrSong on 16/6/4.
//  Copyright © 2016年 MrSong. All rights reserved.
//

#import "MSVerticalCenterButton.h"

@implementation MSVerticalCenterButton
// button上的图片和文字垂直排列，水平居中
-(void)layoutSubviews {
    [super layoutSubviews];
    
    // 图片居中
    CGPoint center = self.imageView.center;
    center.x = self.frame.size.width/2;
    center.y = self.imageView.frame.size.height/2+5;
    self.imageView.center = center;
    
    // 文字居中
    CGRect newFrame = [self titleLabel].frame;
    newFrame.origin.x = 0;
    newFrame.origin.y = CGRectGetMaxY(self.imageView.frame) + 2;
    newFrame.size.width = self.frame.size.width;
    self.titleLabel.frame = newFrame;
    self.titleLabel.textAlignment = NSTextAlignmentCenter;
}

@end
