//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include "../utils/utils.h"

int main(void) {
    int pos = 0;
    const char *input = readLines(1, false);
    //Loop until the end of the file
    while (pos < lenstr(input)) {
        printf("%c\n", *(input + pos));
        if (*(input + pos) == 'R')
            printf("Hello\n");
        else
            printf("Goodbye\n");
        pos = nextNewline(input, pos) + 1;
    }
}
