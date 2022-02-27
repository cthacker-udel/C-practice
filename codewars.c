#include "codewars.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>

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
    const int amt = strlen(theStr);
    char newStr[amt];
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

char *intToBinaryAppend(int number) {
    char decimal[1];
    char the_binary[8];
    int index = 0;
    while (number > 0) {
        int result = number % 2;
        the_binary[index] = result + '0';
        index++;
        number /= 2;
    }
    char *copy = malloc(sizeof(char) * 9);
    int length = strlen(the_binary);
    while (length < 8) {
        the_binary[length] = '0';
        length++;
    }
    for (int i = 7, j = 0; i >= 0; i--, j++) {
        copy[j] = the_binary[i];
    }
    copy[8] = '\0';
    return copy;
}

uint32_t ip_to_uint32(const char *ip) {

    int binaryIndex = 0;
    char *token;
    int place = 1;
    const size_t strLen = strlen(ip);
    char the_str[strLen];
    strcpy(the_str, ip);
    token = strtok(the_str, ".");
    char *result;
    char binary[32];

    while (token != NULL) {
        switch (place) {
            case 1:
                result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
                strcpy(binary, result);
                break;
            case 2:
                result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
                strcat(binary, result);
                break;
            case 3:
                result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
                strcat(binary, result);
                break;
            case 4:
                result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
                strcat(binary, result);
                break;
        }
        token = strtok(NULL, ".");
        place++;
    }
    printf("%s", binary);
    uint32_t total = 0;
    for (int i = 31, power = 0; i >= 0; i--, power++) {
        if (binary[i] == '1') {
            total += pow(2, power);
        }
    }
    return total;

}

char *rot13(const char *src) {

    printf("Passing : %s\n", src);
    const int src_len = strlen(src);
    char cpy_src[src_len];
    char *lower_alphabet = "abcdefghijklmnopqrstuvwxyz";
    char *upper_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int index = 0;
    strcpy(cpy_src, src);
    for (int i = 0; i < (int)strlen(src); i++) {
        char letter = cpy_src[i];
        if (islower(letter)) {
            for (int j = 0; j < 26; j++) {
                if (lower_alphabet[j] == letter) {
                    int rot_ind = j;
                    for (int x = 0; x < 13; x++) {
                        rot_ind++;
                        if (rot_ind == 26) {
                            rot_ind = 0;
                        }
                    }
                    cpy_src[i] = lower_alphabet[rot_ind];
                    break;
                }
            }
        } else if(isupper(letter)) {
            for (int j = 0; j < 26; j++) {
                if (upper_alphabet[j] == letter) {
                    // rotate 13
                    int rot_ind = j;
                    for (int x = 0; x < 13; x++) {
                        rot_ind++;
                        if (rot_ind == 26) {
                            rot_ind = 0;
                        }
                    }
                    cpy_src[i] = upper_alphabet[rot_ind];
                    break;
                }
            }
        }
    }
    char *malloced_copy = malloc(sizeof(char) * strlen(cpy_src));
    strcpy(malloced_copy, cpy_src);
    return malloced_copy;

}

int compareFunc(const void *a, const void *b) {

    return *(int *)a - *(int *)b;

};

long long next_smaller_number(unsigned long long n) {

    unsigned long long origNumber = n;
    char number[100];
    sprintf(number, "%llu", n);
    char *copy = malloc(sizeof(char) * 2);
    copy[1] = '\0';
    int loopVar = 1;
    int values[100];
    int index = 0;
    while (loopVar) {
        for (int i = strlen(number) - 1; i >= 0; i--) {

            if (i == 0) {
                // cannot check prev digit, check forward digit
            } else {
                int prevDigit, currDigit;
                copy[0] = number[i - 1];
                sscanf(copy, "%d", &prevDigit);
                copy[0] = number[i];
                sscanf(copy, "%d", &currDigit);
                if ((prevDigit > currDigit || (currDigit != 0 && prevDigit == 0)) && (currDigit != 0)) {
                    char tmpDigit = number[i - 1];
                    number[i - 1] = number[i];
                    number[i] = tmpDigit;
                    break;
                } else if (prevDigit != 0 && currDigit != 0) {
                    loopVar = 0;
                    break;
                }
                
            }
            values[index++] = strtol(number, (char **)NULL, 10);

        }
    }
    qsort(values, index + 1, sizeof(int), compareFunc);
    const int min = values[0];
    long long result = strtol(number, (char **)NULL, 10);
    return min != origNumber ? min : -1;
}

int numPrimeFactors(int number) {
    int count = 0;
    for (int i = 0; i <= number / 2; i++) {
        if (isPrime(i) && number % i == 0) {
            count++;
        }
    }
    return count;
}
// struct node {
//     int data;
//     struct node *next;
// };
// struct list {
//     size_t sz;
//     struct node *head;
// };

// struct list* createList();

// // push data at the head of the list
// void insertFirst(struct list* l, int data) {
//     if (l->head == NULL) {
//         l->head->data = data;
//         l->head->next = NULL;
//     }
// }

// struct list* reverse(struct list* l);

// void listFree(struct list* l);

// // functions to write
// struct list* kPrimes(int k, int start, int nd)
// {
//     createList();
//     for (int i = start; i <= nd; i++) {
//         if (numPrimeFactors(i) == k) {

//         }
//     }
// }

int puzzle(int s)
{
    // your code
    return -1;
}

int numLength(int number) {

    int count = 1;
    while (number > 9) {
        number /= 10;
        count++;
    }
    return count;

}

int *up_array(const int *arr, unsigned *count) {
    
    int *sub_arr = (int *)malloc(sizeof(int) * *count);
    for (int i = 0; i < *count; i++) {
      sub_arr[i] = arr[i];
    }
    for (int i = 0; i < *count; i++) {
      printf("%d, ", sub_arr[i]);
    }
    for (int i = 0; i < *count; i++) {
      if (sub_arr[i] > 9 || sub_arr[i] < 0) {
        return NULL;
      }
    }
    if(sub_arr[*count - 1] == 9) {
      for (int i = *count - 1; i >= 0; i--) {
        if (sub_arr[i] == 9) {
          if (i == 0) {
            // found the edge case
            *count = *count + 1;
            int *newArr = (int *)malloc(sizeof(int) * (*count + 1));
            newArr[0] = 1;
            for (int i = 1; i < *count; i++) {
              newArr[i] = 0;
            }
            return newArr;
          }
          sub_arr[i] = 0;
        } else if (sub_arr[i] < 0 || sub_arr[i] > 9) {
            return NULL;
        } else {
            sub_arr[i] = sub_arr[i] + 1;
            break;
        }
      }
      return sub_arr;
    } else if (sub_arr[*count - 1] < 0) {
        return NULL;
    } else {
      sub_arr[(*count) - 1] = sub_arr[(*count) - 1] + 1;
    }
    return sub_arr;
}

// https://www.codewars.com/kata/591f3a2e4e5471989000013d/train/c
char *parse(const char *source) {
    
    const int sourceLen = strlen(source);
    char sourcecpy[sourceLen];
    strcpy(sourcecpy, source);
    char *newLineSplit = strtok(sourcecpy, "\n");

    char newStr[sourceLen];
    int newStrInd = 0;

    int gotoFound = 0;
    char number[sourceLen];
    while (newLineSplit != NULL) {

        if (gotoFound && strstr(newLineSplit, number)) {
            // found line
            gotoFound = 0;
            for(int i = 0, foundSpace = 0; i < strlen(newLineSplit); i++) {
                if (!foundSpace && newLineSplit[i] == ' ') {
                    foundSpace = 1;
                }
                else if (foundSpace) {
                    newStr[newStrInd++] = newLineSplit[i];
                }
            }
            newStr[newStrInd++] = ' ';
            newStr[newStrInd] = '\0';
        }
        else if (strstr(newLineSplit, "goto")) {
            // goto found
            gotoFound = 1;
            for (int i = 5, j = 0; i < strlen(newLineSplit); i++, j++) {
                number[j] = newLineSplit[i];
                number[j + 1] = '\0';
            }
        } else if (!gotoFound) {
            for(int i = 0, foundSpace = 0; i < strlen(newLineSplit); i++) {
                if (!foundSpace && newLineSplit[i] == ' ') {
                    foundSpace = 1;
                }
                else if (foundSpace) {
                    newStr[newStrInd++] = newLineSplit[i];
                }
            }
            newStr[newStrInd++] = ' ';
            newStr[newStrInd] = '\0';
        }

        newLineSplit = strtok(NULL, "\n");

    }
    int len = strlen(newStr);
    newStr[len - 1] = '\0';
    char *returnStr = (char *)malloc(sizeof(char) * strlen(newStr));
    strcpy(returnStr, newStr);
    return returnStr;
}

int **multiplication_table(int n) {

    int **table = (int **)malloc(sizeof(int *) * n);
    int *values = (int *)malloc(sizeof(int) * n * n);
    int placerInd = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            values[placerInd++] = i * j;
        }
    }

    for (int i = 0, j = 0; i < n*n; i += n, j++) {
        table[j] = &values[i];
    }

    return table;

}


int main(void) {
    int **result = multiplication_table(3);
    for (int i = 0; i < 3; i++) {
        int *row = result[i];
        for (int j = 0; j < 3; j++) {
            printf("%d, ", row[i]);
        }
        printf("\n");
    }
}