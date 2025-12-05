//
// Created by yavidor on 12/3/2025.
//

#include "utils.h"

#include <stdio.h>
#include <stdlib.h>

char *readLines(const int day, const bool isRealInput) {
    char fileName[20];
    sprintf(fileName, "../day%d/%s.txt", day, isRealInput ? "input" : "example");
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        fprintf(stderr, "file %s is null", fileName);
        return "";
    }
    const size_t size = getFileSize(fileName);
    char *contents = malloc(sizeof(char) * (size + 1));
    fread(contents, sizeof(char), size, file);
    *(contents + size) = '\0';
    return contents;
}

int getFileSize(const char *fileName) {
    FILE *fd = fopen(fileName, "r");
    int count = 0;
    while ((char) fgetc(fd) != EOF) {
        count++;
    }
    fclose(fd);
    return count;
}

int nextCharOcc(const char *str, const char target, int pos, const int end) {
    while (*(str + pos) != target) {
        if (pos > end)
            return end;
        pos++;
    }
    return pos;
}

int lenstr(const char *str) {
    int pos = 0;
    while (*(str + pos) != '\0') {
        pos++;
    }
    return pos;
}
int readNumber(const char *str, int pos, const char delimiter) {
    const int newLinePos = nextCharOcc(str, delimiter, pos, lenstr(str)) + 1;
    char *numInput = malloc(sizeof(char) * 1 + (newLinePos - pos));
    int innerPosition = 0;
    pos++;

    while (pos < newLinePos - 1) {
        *(numInput + innerPosition) = *(str + pos);
        innerPosition++;
        pos++;
    }
    *(numInput + innerPosition) = '\0';
    char *endPointer = (numInput + innerPosition);
    const long output = strtol(numInput, &endPointer, 10);
    free(numInput);
    return output;
}
