#include "codewars.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void two_oldest_ages(size_t n, const int ages[], int result[2]) {

    int agesArray[2] = {0, 0};
    int max = 0;
    for (int i = 0; i < n; i++) {
        int value = ages[i];
        if (value > max) {
            max = value;
        }
    }
    result[1] = max;
    int secondMax = 0;
    for (int i = 0; i < n; i++) {
        if (ages[i] > secondMax && ages[i] != max) {
            secondMax = ages[i];
        }
    }
    result[0] = secondMax;

}

int sum_digits(int n) {

    int count = 0;
    n = abs(n);
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;

}

int main(void) {

    printf("Number is = %d", sum_digits(10));

}