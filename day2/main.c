//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include <stdlib.h>

#include "../utils/utils.h"

int part1(const char *input) {
    int pos = 0;
    const int stringLength = lenstr(input);
    while (pos <= stringLength) {
        int num = readNumber(input, '-',pos);
        pos = nextCharOcc(input,'-',pos);
        char shtutstring[20];
        itoa(num, shtutstring, 10);
        printf("%s\n", shtutstring);
        printf("%d\n", num);
        num = nextCharOcc(input,',',pos);
        pos = nextCharOcc(input,',',pos);
        itoa(num, shtutstring, 10);
        printf("%s\n", shtutstring);
        printf("%d\n", num);
    }
    return pos;
}

int part2(const char *input) { return 2; }

int main(void) {
    const char *input = readLines(2, false);

    const int part1Output = part1(input);
    printf("%d\n", part1Output);

    const int part2Output = part2(input);
    printf("%d\n", part2Output);
}
