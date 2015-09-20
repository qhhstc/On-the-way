//
//  HomeViewController.h
//  项目三
//
//  Created by 天才邱海晖 on 15/8/27.
//  Copyright (c) 2015年 no.4. All rights reserved.
//

#import "BaseViewController.h"
#import "AppDelegate.h"
#import "TargetProgressView.h"
#import "MotionServer.h"
@interface HomeViewController : BaseViewController<UIAlertViewDelegate>
@property (weak, nonatomic) IBOutlet UILabel *targetValueLabel;
@property (weak, nonatomic) IBOutlet UILabel *completedValueLabel;
@property (weak, nonatomic) IBOutlet TargetProgressView *progressView;
@property (weak, nonatomic) IBOutlet UILabel *todayTotalSteps;

@property (nonatomic,assign)NSInteger runningTarget;
@property (nonatomic,assign)NSInteger todayCompleted;


@property (nonatomic,assign,getter=isRunning)BOOL running;
@end
