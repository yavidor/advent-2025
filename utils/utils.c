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

int nextCharOcc(const char *str, const char target, int startingPost) {
    printf("+++%d\n",startingPost);
    while (*(str + startingPost) != target && *(str + startingPost) != '\n') {
        if (*(str+startingPost) == '\0')
            return startingPost;
        startingPost++;
    }
    return startingPost;
}

int lenstr(const char *str) {
    int pos = 0;
    while (*(str + pos) != '\0') {
        pos++;
    }
    return pos;
}
int readNumber(const char *str,  const char delimiter, int startingPos) {
    const int newLinePos = nextCharOcc(str, delimiter, startingPos) + 1;
    char *numInput = malloc(sizeof(char) * 1 + (newLinePos - startingPos));
    int innerPosition = 0;
    while (startingPos < newLinePos - 1) {
        *(numInput + innerPosition) = *(str + startingPos);
        innerPosition++;
        startingPos++;
    }
    *(numInput + innerPosition) = '\0';
    char *endPointer = (numInput + innerPosition);
    const long output = strtol(numInput, &endPointer, 10);
    free(numInput);
    return output;
}
