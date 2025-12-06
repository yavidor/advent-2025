//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include <stdlib.h>

#include "../utils/utils.h"

int part1(const char *input) {
    const int pos = 2;
    const int num = readNumber(input, pos, ',');
    char shtutstring[20];
    itoa(num, shtutstring, 10);
    printf("%s\n",shtutstring);
    printf("%d\n", num);
    return 1;
}

int part2(const char *input) { return 2; }

int main(void) {
    const char *input = readLines(2, false);

    const int part1Output = part1(input);
    printf("%d\n", part1Output);

    const int part2Output = part2(input);
    printf("%d\n", part2Output);
}
