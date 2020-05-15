//
//  KeypadTableViewController.h
//  TTLockSourceCodeDemo
//
//  Created by Jinbo Lu on 2019/5/28.
//  Copyright © 2019 Populife. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LockModel.h"


@interface KeypadTableViewController : UITableViewController
- (instancetype)initWithLockModel:(LockModel *)lockModel;
@end


