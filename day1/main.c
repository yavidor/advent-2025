//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include "../utils/utils.h"

#define RIGHT 'R'
#define LEFT 'L'

int readNumber(const char *str, int pos) {
    const int newLinePos = nextNewline(str, pos) + 1;
    char *numInput = malloc(sizeof(char) * 1+(newLinePos - pos));
    int innerPosition = 0;
    pos++;

    while (pos < newLinePos-1) {
        *(numInput + innerPosition) = *(str + pos);
        innerPosition++;
        pos++;
    }
    *(numInput + innerPosition) = '\0';
    char *endptr = (numInput + innerPosition);
    long longoosh = strtol(numInput, &endptr, 10);
    free(numInput);
    return longoosh;
}

int main(void) {
    int pos = 0;
    const char *input = readLines(1, false);
    // Loop until the end of the file
    while (pos < lenstr(input)-1) {
        const bool positiveDirection = *(input + pos) == RIGHT;
        printf("%d\n", positiveDirection);
        printf("%d\n", readNumber(input, pos));
        pos = nextNewline(input, pos) + 1;
    }
}
