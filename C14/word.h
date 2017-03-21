
// Copyright 2017 Karthik

#ifndef _WORD_H
#define WORD_H

/*********************************************************
 * read_word: reads the next word from the input and     *
 *            stores it in word. Makes word empty if no  *
 *            word could be read becoz of end-of-file.   *
 *            Truncates the word if its length exceeds   *
 *            len.                                       *
 *********************************************************/

void read_word(char *word, int len);

#endif   //  _WORD_H

