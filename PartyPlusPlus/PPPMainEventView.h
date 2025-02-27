//
//  PPPMainEventView.h
//  PartyPlusPlus
//
//  Created by Scott Andrus on 10/12/12.
//  Copyright (c) 2012 Tapatory. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PPPEvent.h"

@interface PPPMainEventView : UIView

// Non-IB
@property (strong, nonatomic) PPPEvent *event;
@property (strong, nonatomic) NSArray *attendingThumbnails;

// IBOutlets
@property (strong, nonatomic) IBOutlet UIView *topOverlayView;
@property (strong, nonatomic) IBOutlet UILabel *eventNameLabel;
@property (strong, nonatomic) IBOutlet UILabel *placeLabel;

@property (strong, nonatomic) IBOutlet UIView *bottomOverlayView;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *timeLabel;

@property (strong, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) IBOutlet UIScrollView *thumbnailScrollView;
@property (strong, nonatomic) IBOutlet UIImageView *thumbnailImageView;

// Public methods
- (void)loadEvent:(PPPEvent *)event;

- (void)showThumbnails;

@end
