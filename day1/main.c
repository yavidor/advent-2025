//
// Created by yavidor on 12/5/2025.
//

#include <stdio.h>
#include "../utils/utils.h"

#define RIGHT 'R'
#define LEFT 'L'


int part1(const char *input) {
    int pos = 0;
    const int inputLength = lenstr(input);

    // The value on the lock, starting position is 50
    int value = 50;

    // Times the lock's value was zero
    int zeroCounter = 0;

    // Loop until the end of the file
    while (pos < inputLength - 1) {
        const bool positiveDirection = *(input + pos) == RIGHT;
        const int rotation = readNumber(input, pos, '\n');
        value += positiveDirection ? rotation : -rotation;
        value = value >= 0 ? value : value + 100;
        value %= 100;
        if (value == 0) {
            zeroCounter++;
        }
        pos = nextCharOcc(input, '\n', pos) + 1;
    }
    return zeroCounter;
}

int part2(const char *input) {
    int pos = 0;
    const int inputLength = lenstr(input);

    // The value on the lock, starting position is 50
    int value = 50;

    // Times the lock's value was zero
    int zeroCounter = 0;

    // Loop until the end of the file
    while (pos < inputLength - 1) {
        const bool positiveDirection = *(input + pos) == RIGHT;
        const int rotation = readNumber(input, pos, '\n');
        int stepsCounter = 0;
        while (stepsCounter < rotation) {
            value += positiveDirection ? 1 : -1;
            value = value >= 0 ? value : value + 100;
            value %= 100;
            if (value == 0) {
                zeroCounter++;
            }
            stepsCounter++;
        }
        pos = nextCharOcc(input, '\n', pos) + 1;
    }
    return zeroCounter;
}

int main(void) {
    const char *input = readLines(1, true);

    int part1Output = part1(input);
    printf("%d\n", part1Output);

    int part2Output = part2(input);
    printf("%d\n", part2Output);
}
