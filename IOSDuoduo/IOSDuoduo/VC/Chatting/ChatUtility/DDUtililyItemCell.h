//
//  DDUtililyItemCell.h
//  IOSDuoduo
//
//  Created by 东邪 on 14-5-23.
//  Copyright (c) 2014年 dujia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AQGridViewCell.h"
@class DDChatUtilityItem;
@interface DDUtililyItemCell : AQGridViewCell
@property(nonatomic,strong)UIImageView *icon;
@property(nonatomic,strong)UILabel *title;
- (void)configureForItem:(DDChatUtilityItem *)item;
@end
