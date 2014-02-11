//
//  RSTakeUntilCell.h
//  RAC-Snippets
//
//  Created by Limboy on 2/11/14.
//  Copyright (c) 2014 ReactiveCocoa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RSTakeUntilCell : UITableViewCell

@property (nonatomic, readonly) UIButton *button;
- (void)configureCellWithIndexPath:(NSIndexPath *)indexPath;
@end
