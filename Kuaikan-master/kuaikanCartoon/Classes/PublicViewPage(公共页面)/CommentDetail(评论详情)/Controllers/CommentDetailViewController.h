//
//  CommentDetailViewController.h
//  kuaikanCartoon
//
//  Created by dengchen on 16/5/7.
//  Copyright © 2016年 name. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"

@interface CommentDetailViewController : BaseViewController

@property (nonatomic,copy) NSNumber *comicID;

+ (instancetype)showInVc:(UIViewController *)vc withComicID:(NSNumber *)ID;

@end
