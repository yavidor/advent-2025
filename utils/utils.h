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

//Get the position of the next '\n', if there are not newlines left, return the end position of the string.
int nextNewline(const char* str, int pos, int end);

//Get the length of a string, like strlen but mine (:
int lenstr(const char* str);

#endif // ADVENT_2025_UTILS_H
