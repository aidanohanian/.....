//
//  calcbizlogic.c
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 11/8/19.
//  Copyright © 2019 Ohanian, Aidan. All rights reserved.
//

#include "CalcBiz.h"
 
double calc(double arg1 ,int mathOp,double arg2){
     
double calcAnswer = 0.0;
     
switch(mathOp)
      {
          case PLUS:
 
              calcAnswer = arg1 + arg2;
              break;
          case MINUS:
 
              calcAnswer = arg1 - arg2;
              break;
          case DIVIDE:
 
              calcAnswer = arg1 / arg2;
              break;
          case MULTIPLY:
 
              calcAnswer = arg1 * arg2;
              break;
          case SQUARE:
 
              arg2 = arg1;
              calcAnswer = arg1 * arg2;
              break;
          case MODULO:
 
              calcAnswer = (double)((int)arg1 % (int)arg2);
              break;
          case -1:
              calcAnswer = arg1;
      }
 
     return calcAnswer;
}
