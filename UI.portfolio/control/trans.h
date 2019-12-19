//
//  trans.h
//  UI.portfolio
//
//  Created by Ohanian, Aidan on 12/18/19.
//  Copyright © 2019 Ohanian, Aidan. All rights reserved.
//

/ Definition of structure
// Tokenizing Helper Structure
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
  char reversed[LINE_BUFFER_SIZE];
  WORDS words[WORDS_TO_LINE_SIZE];
} PHRASE;
