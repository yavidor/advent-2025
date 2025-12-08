//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include <stdlib.h>

#include "../utils/utils.h"

long long part1(const char *input) {
    int pos = 0;
    const int stringLength = lenstr(input);
    long long sum = 0;
    while (pos <= stringLength) {
        // Get the first and second number
        const long long start = readLongLong(input, '-', pos);
        pos = nextCharOcc(input, '-', pos) + 1;
        const long long end = readLongLong(input, ',', pos);
        pos = nextCharOcc(input, ',', pos) + 1;
        long long num = start;
        char *endStr = malloc(20);
        lltoa(end, endStr, 10);

        while (num <= end) {
            char *currNumStr = malloc(20);
            lltoa(num, currNumStr, 10);
            const int currNumStrLen = lenstr(currNumStr);
            if (currNumStrLen == lenstr(endStr) && currNumStrLen % 2 != 0) {
                break;
            }
            const char *startPos = currNumStr;
            const char *midPos = currNumStr + (currNumStrLen / 2);
            if (currNumStrLen % 2 == 0) {
                bool flag = true;
                while (midPos < currNumStr + currNumStrLen) {
                    if (*startPos != *midPos) {
                        flag = false;
                        break;
                    }
                    startPos++;
                    midPos++;
                }
                if (flag == true) {
                    sum += num;
                }
            }
            num++;
            free(currNumStr);
        }
        free(endStr);
    }
    return sum;
}

int part2(const char *input) { return 2; }

int main(void) {
    const char *input = readLines(2, true);

    const long long part1Output = part1(input);
    printf("%lld\n", part1Output);

    const int part2Output = part2(input);
    printf("%d\n", part2Output);
}
