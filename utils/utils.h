//
// Created by yavidor on 12/3/2025.
//


#ifndef ADVENT_2025_UTILS_H
#define ADVENT_2025_UTILS_H

#include <stdbool.h>

//To read the lines of the input and get them a single string
char *readLines(int day, bool isRealInput);

//Get the file size in characters
int getFileSize(const char *fileName);

//Get the position of the next occurrence of 'target' in the line, if there aren't any left, return the position of the next newline, if there aren't any left, end position of the string.
int nextCharOcc(const char* str, char target, int pos);

//Get the length of a string, like strlen but mine (:
int lenstr(const char* str);

// Read the number that appears at the end of each line
int readNumber(const char *str, int pos, char delimiter);

#endif // ADVENT_2025_UTILS_H
