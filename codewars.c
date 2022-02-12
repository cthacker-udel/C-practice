#include "codewars.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
    for (int i = 0; i < count; i++) {
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

long compareTwoInts(const int *a, const int *b) {
    return *(a) - *(b);
}

long sum_two_smallest_numbers(size_t n, const int numbers[]) {

    qsort(numbers, n, sizeof(int), compareTwoInts);
    return ((long long)numbers[0]) + ((long long)numbers[1]);

}

typedef struct {
    int r, g, b;
} rgb;

double arithmetic(double a, double b, const char* operator) {

    if (!strcmp("add", operator)) {
        return a + b;
    } else if (!strcmp("subtract", operator)) {
        return a - b;
    } else if(!strcmp("multiply", operator)) {
        return a * b;
    } else if(!strcmp("divide", operator)) {
        return a / b;
    } else {
        return 1.0;
    }

}

typedef long long ll;
typedef struct Data Data;
struct Data {
    ll *array;
    int sz;
};

rgb hex_str_to_rgb(const char *hex_str) {

    rgb *theValues = malloc(sizeof(rgb));
    int fIndex = 0;
    int sIndex = 0;
    int tIndex = 0;
    char *firstPart = malloc(sizeof(char) * 3);
    char *secondPart = malloc(sizeof(char) * 3);
    char *thirdPart = malloc(sizeof(char) * 3);
    int count = 0;
    for (int i = 1; i < 7; i++) {
        if (i >= 3 && i < 5) {
            // second part
            *(secondPart + sIndex++) = *(hex_str + i);
        } else if (i >= 5 && i < 7) {
            // third part
            *(thirdPart + tIndex++) = *(hex_str + i);
        } else {
            // first part
            *(firstPart + fIndex++) = *(hex_str + i);
        }
    }
    int res = strtol(firstPart, NULL, 16);
    int res2 = strtol(secondPart, NULL, 16);
    int res3 = strtol(thirdPart, NULL, 16);
    theValues->r = res;
    theValues->g = res2;
    theValues->b = res3;
    return *theValues;
}

int isPrime(ll number) {

    if (number < 2) {
        return 1;
    } else {
        if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0) {
            return 0;
        } else {
            if (number == 1095403) {
                printf("found number \n");
            }
            for (int i = 2; i <= (sqrt(number) + 1); i++) {
                if (number % i == 0) {
                    return 0;
                }
            }
            return 1;
        }
    }
}

int isUniqueBackwards(ll one, ll two) {
    while (one > 0 && two > 0) {
        if (one % 10 == two % 10) {
            one /= 10;
            two /= 10;
        } else {
            return 0;
        }
    }
    return 1;
}

int getLongLongBackwards(ll one) {
    char theStr[19];
    sprintf(theStr, "%lli", one);
    char newStr[strlen(theStr)];
    for (int i = strlen(theStr) - 1, j = 0; i >= 0; i--, j++) {
        newStr[j] = theStr[i];
    }
    return atoll(newStr);
}

int compareLongLong(void *long1, void *long2) {
    long long value1 = *((long long *)long1);
    long long value2 = *((long long *)long2);
    return value1 - value2;
}

Data* backwardsPrime(ll start, ll end) {
    int count = 0;
    Data *returnData = malloc(sizeof(Data));
    ll *storageArray = malloc(sizeof(long long) * count);
    for (ll i = start; i <= end; i++) {
        ll backwards = getLongLongBackwards(i);
        if (backwards != i && isPrime(backwards) && isPrime(i)) {
            count++;
            storageArray = realloc(storageArray, sizeof(long long) * count);
            *(storageArray + (count - 1)) = i;
        }
    }
    qsort(storageArray, count, sizeof(long long), compareLongLong);
    returnData->array = storageArray;
    returnData->sz = count;
    return returnData;

}

char* playPass(char* s, int n) {

    // shift letters
    char lower_letters[] = "abcdefghijklmnopqrstuvwxyz";
    char upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *tmpString = malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(tmpString, s);
    int index = 0;
    for (int i = 0; tmpString[i] != '\0'; i++) {
        if (isalpha(tmpString[i])) {
            // is a letter
            if (i % 2 == 0) {
                // uppercase letter
                void *result = strchr(lower_letters, tmpString[i]);
                if (result != NULL) {
                    // shift to upper
                    char resChar = toupper(tmpString[i]);
                    for (int j = 0; j < strlen(upper_letters); j++) {
                        if (upper_letters[j] == resChar) {
                            index = j + n;
                            while (index > 25) {
                                index -= 26;
                            }
                            tmpString[i] = upper_letters[index];
                            break;
                        }
                    }
                } else {
                    // is already upper
                    for (int j = 0; j < strlen(upper_letters); j++) {
                        if (upper_letters[j] == tmpString[i]) {
                            index = j + n;
                            while (index > 25) {
                                index -= 26;
                            }
                            tmpString[i] = upper_letters[index];
                            break;
                        }
                    }
                }
            } else {
                // lowercase letter
                void *result = strchr(upper_letters, tmpString[i]);
                if (result) {
                    // is upper, so downcase
                    char to_lower = tolower(tmpString[i]);
                    for (int j = 0; j < strlen(lower_letters); j++) {
                        if (lower_letters[j] == to_lower) {
                            index = j + n;
                            while (index > 25) {
                                index -= 26;
                            }
                            tmpString[i] = lower_letters[index];
                        }
                    }
                } else {
                    // is lower
                    for (int j = 0; j < strlen(lower_letters); j++) {
                        if (lower_letters[j] == tmpString[i]) {
                            index = j + n;
                            while (index > 25) {
                                index -= 26;
                            }
                            tmpString[i]  = lower_letters[index];
                            break;
                        }
                    }
                }
            }
        } else if (isdigit(tmpString[i])) {
            // is a digit
            char convert_arr[] = { tmpString[i], '\0'};
            int atoi_result = atoi(convert_arr);
            int result = abs(atoi_result - 9);
            tmpString[i] = result + '0';
        }
    }
    char *res = malloc(sizeof(char) * strlen(s));
    for (int j = strlen(s) - 1, i = 0; j >= 0; j--, i++) {
        res[i] = tmpString[j];
    }
    res[strlen(s)] = '\0';
    return res;
}

int main(void) {
    printf("%s", playPass("!24 1!!* !H!!-!FJQQ!!3  !   VDU7! OQL(A 425  BW!E!-H '&*( W90! ! 5!9(!*B", 1));
}