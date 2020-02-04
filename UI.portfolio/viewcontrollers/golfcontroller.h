//
//  golfcontroller.h
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 1/15/20.
//  Copyright © 2020 Ohanian, Aidan. All rights reserved.
//

#import <UIKit/UIKit.h>
// These values simulate speed and friction
#define speedScale 0.20
#define speedDamping 0.90 // friction rate
#define stopSpeed 5.0
@interface GolfController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *hole;
@property (strong, nonatomic) IBOutlet UIImageView *ball;
@property (strong, nonatomic) IBOutlet UIImageView *pond;
@property (strong, nonatomic) IBOutlet UIImageView *wall1;

@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) float ballVelocityX;
@property (nonatomic) float ballVelocityY;
@property (strong, nonatomic) NSTimer *gameTimer;
@end





