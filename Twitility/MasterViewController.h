//
//  MasterViewController.h
//  Twitility
//
//  Created by Ali Hashmi on 8/28/12.
//  Copyright (c) 2012 The Plumtree Group. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController {
    NSArray *tweets;
}

- (void) fetchTweets;

@end
