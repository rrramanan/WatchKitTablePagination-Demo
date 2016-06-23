//
//  InterfaceController.h
//  TablePaginationDemo WatchKit Extension
//
//  Created by Vinod Ramanathan on 23/06/16.
//  Copyright © 2016 Vinod Ramanathan. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController
@property (strong, nonatomic) IBOutlet WKInterfaceTable *watchTable;

@end
