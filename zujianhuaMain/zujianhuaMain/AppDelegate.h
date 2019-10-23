//
//  AppDelegate.h
//  zujianhuaMain
//
//  Created by 葛朋 on 2019/10/23.
//  Copyright © 2019 葛朋. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

