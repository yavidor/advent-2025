//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include "../utils/utils.h"


int part1(const char *input) {
    int pos = 1;
    int num = readNumber(input, pos, ',');
    printf("%d\n", num);
    return 1;
}

int part2(const char *input) { return 2; }

int main(void) {
    const char *input = readLines(2, false);

    int part1Output = part1(input);
    printf("%d\n", part1Output);

    int part2Output = part2(input);
    printf("%d\n", part2Output);
}
