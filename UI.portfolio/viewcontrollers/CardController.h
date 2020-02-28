//
//  cardscontroller.h
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 2/13/20.
//  Copyright © 2020 Ohanian, Aidan. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "control.h"


@interface CardController : UIViewController

{
    CARD *cards;
    CARD *player;
    CARD *playerWins;
    CARD *computer;
    CARD *computerWins;
    CARD *warZone;
}

@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;

// Properties to manage visible parts of computer deck
@property (strong, nonatomic) IBOutlet UIImageView *computerDeck;
@property (strong, nonatomic) IBOutlet UIImageView *computerWarPlay;
@property (strong, nonatomic) IBOutlet UIImageView *computerWins1;
@property (strong, nonatomic) IBOutlet UIImageView *computerWins2;
@property (strong, nonatomic) IBOutlet UILabel *computerDeckCnt;
@property (strong, nonatomic) IBOutlet UILabel *computerDeckWinsCnt;


// Properties to manage visible parts of player deck
@property (strong, nonatomic) IBOutlet UIImageView *playerDeck;
@property (strong, nonatomic) IBOutlet UIImageView *playerWarPlay;
@property (strong, nonatomic) IBOutlet UIImageView *playerWins1;
@property (strong, nonatomic) IBOutlet UIImageView *playerWins2;
@property (strong, nonatomic) IBOutlet UILabel *playerDeckCnt;
@property (strong, nonatomic) IBOutlet UILabel *playerDeckWinsCnt;

@property (strong, nonatomic) IBOutlet UILabel *gameMarquee;
@property (strong, nonatomic) IBOutlet UILabel *gameOver;

@property (strong, nonatomic) NSTimer *autonomousTimer;
@property (strong, nonatomic) NSTimer *marqueeTimer;

@end
