//
//  m.m
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 12/4/19.
//  Copyright © 2019 Ohanian, Aidan. All rights reserved.
//

#import <Foundation/Foundation.h>

- (IBAction)reverse:(id)sender {
const char *cInput = [input.text UTF8String];
long inputLength = input.text.length;
// Method 1 - Array method
revX1.text = [NSString stringWithFormat:@"%s" , revXArray((char*)cInput, inputLength) ];
/ revx4 prototypes
char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, long length)
