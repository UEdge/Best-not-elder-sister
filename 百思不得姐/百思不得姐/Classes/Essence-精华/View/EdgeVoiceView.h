//
//  EdgeVoiceView.h
//  百思不得姐
//
//  Created by Edge on 2017/5/7.
//  Copyright © 2017年 Leon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class EdgeTopics;
@interface EdgeVoiceView : UIView
//  模型数据
@property(strong,nonatomic)EdgeTopics *voicetopic;
+(instancetype)loadVoiceXib;
@end
