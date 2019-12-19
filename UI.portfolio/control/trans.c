//
//  trans.c
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 12/18/19.
//  Copyright © 2019 Ohanian, Aidan. All rights reserved.
//

#include "trans.h"
#include <stdio.h>
#include <string.h>
#include "control.h"
void tokentest(){
  PHRASE in;               // Phrase is defined in control.h
  char str[LINE_BUFFER_SIZE] = "A Man A Plan A Canal – Panama";
  const char *tokenizer = " ";
   
  strcpy(in.original, str);
  printf( "original phrase: %s\n", in.original );
  long i = 0;
  char *token = strtok(str, tokenizer);  // 1st word
  while( token != NULL ) {        // NULL mean end of phrase
    printf( "word after tokenizing: %s\n", token );
     
    // assignment to struct
    strcpy(in.words[i].word, token);
    printf( "word in structure %li: %s\n", i, in.words[i].word);
     
    // iterate
    i++;
    token = strtok(NULL, tokenizer);  // remaining words, NULL means same str
  }
  return;
}
