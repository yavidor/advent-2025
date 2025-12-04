//
// Created by yavidor on 12/3/2025.
//


#ifndef ADVENT_2025_UTILS_H
#define ADVENT_2025_UTILS_H

#include <stdbool.h>

char *readLines(int day, bool isRealInput);

int getFileSize(const char *fileName);

int nextNewline(const char* str, int pos);

int lenstr(const char* str);

#endif // ADVENT_2025_UTILS_H
