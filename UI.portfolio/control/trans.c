//
//  trans.c
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 12/18/19.
//  Copyright © 2019 Ohanian, Aidan. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "control.h"

/**
*  Data  definition for Phrase and Words <br>
*  this is moved local as intention is to have accessers (getters) for relevant data
 */
typedef struct words {
    char word[BUFFER_SIZE];
    char reversed[BUFFER_SIZE];
    char pigged[BUFFER_SIZE];
    char shorted[BUFFER_SIZE];
} WORDS;
typedef struct phrases {
    char original[LINE_BUFFER_SIZE];
    char piglatin[LINE_BUFFER_SIZE];
    char shorthand[LINE_BUFFER_SIZE];
    char reverse[LINE_BUFFER_SIZE];
    long wordCount;
    WORDS words[WORDS_TO_LINE_SIZE];    // many copies of the Word structure (1 to many)
} PHRASE;

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
