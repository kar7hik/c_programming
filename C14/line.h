
// Copyright 2017 Karthik

#ifndef _LINE_H
#define _LINE_H


/*******************************************************
 * clear_line: clears the current line.                *
 *******************************************************/
void clean_line(void);



/*******************************************************
 * add_word: Adds word to the end of the current line. *
 *           if this is not the first word on the line *
 *           puts one space before word.               *
 *******************************************************/
void add_word(const char *word);



/*******************************************************
 * space_remaining: returns the no of characters left  *
 *                  in the current line.               *
 *                                                     *
 *******************************************************/
int space_remaining(void);



/*******************************************************
 * write_line: writes the current line with            *
 *             justification.                          *
 *                                                     *
 *******************************************************/
void write_line(void);



/*******************************************************
 * space_remaining: writes the current line without    *
 *                  justification. If the line is      *
 *                  empty, does nothing.               *
 *******************************************************/
void flush_line(void);



#endif  // _LINE_H
