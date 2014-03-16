//
//  MainViewController.h
//  UnitProjet
//
//  Created by ligh on 14-3-16.
//  Copyright (c) 2014年 ligh. All rights reserved.
//

#import "FlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
