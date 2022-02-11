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

void rowWeights(const int weights[], int count, int teams[]) {

    int whichTeam = 0;
    int team1Total = 0;
    int team2Total = 0;
    for (int i = 0; i < weights; i++) {
        if (whichTeam) {
            team1Total += weights[i];
            whichTeam = 1;
        } else {
            whichTeam = 0;
            team2Total += weights[i];
        }
    }
    teams[0] = team1Total;
    teams[1] = team2Total;

}

int cmpFunc (const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int minValue(const int* values, const size_t len)
{
  int *theSet = malloc(sizeof(int) * len);
  int index = 0;
  int found = 0;
  for (int i = 0; i < len; i++) {
    int value = *(values + i);
    for (int j = 0; j < len; j++) {
      if(theSet[j] == value) {
        // dup found
        found = 1;
        break;
      } else {
        found = 0;
      }
    }
    if (!found) {
      theSet[index++] = value;
      found = 1;
    }
  }
  
  for(int i = 0; i < len; i++) {
    printf("%d\n", theSet[i]);
  }
}


char *remove_url_anchor(const char *url_in) {

    int count = 0;
    for (int i = 0; *(url_in + i) != '\0' ;i++) {
        printf("Char is : %c\n", *(url_in + i));
        if (*(url_in + i) == '#') {
            break;
        } else {
            count++;
        }
    }
    char *allocated_string = malloc(sizeof(char) * (count + 1));
    for (int i = 0; i < count; i++) {
        *(allocated_string + i) = *(url_in + i);
    }
    *(allocated_string + (count)) = '\0';
    return allocated_string;
}

int divisors(int n) {

    int count = 2;
    int starter = 2;
    while (starter < (n / 2)) {
        if (n % starter == 0) {
            count++;
        }
        starter++;
    }
    return count;

}

int main(void) {

    

}