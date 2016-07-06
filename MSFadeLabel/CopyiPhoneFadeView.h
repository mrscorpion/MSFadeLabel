//
//  CopyiPhoneFadeView.h
//  渐变的文字
//
//  Created by mrscorpion on 15/10/27.
//  Copyright © 2015年 mrscorpion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CopyiPhoneFadeView : UIView

@property (nonatomic,strong) NSString *text;
@property (nonatomic,assign) NSTextAlignment alignment;
@property (nonatomic,strong) UIColor *backColor;
@property (nonatomic,strong) UIColor *foreColor;
@property (nonatomic,strong) UIFont *font;

- (void)iPhoneFadeWithDuration:(NSTimeInterval)duration;

@end
