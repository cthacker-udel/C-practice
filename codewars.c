#include "codewars.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdbool.h>
#include <float.h>
#define ARR_LEN(array) (sizeof(array) / sizeof *(array))
// #define sample_test_find_multiples(n, limit, expected_array) do_test(n, limit, ARR_LEN(expected_array), expected_array, (uint[ARR_LEN(expected_array)]){0})

// void two_oldest_ages(size_t n, const int ages[], int result[2]) {

//     int agesArray[2] = {0, 0};
//     int max = 0;
//     for (int i = 0; i < n; i++) {
//         int value = ages[i];
//         if (value > max) {
//             max = value;
//         }
//     }
//     result[1] = max;
//     int secondMax = 0;
//     for (int i = 0; i < n; i++) {
//         if (ages[i] > secondMax && ages[i] != max) {
//             secondMax = ages[i];
//         }
//     }
//     result[0] = secondMax;

// }

// int sum_digits(int n) {

//     int count = 0;
//     n = abs(n);
//     while (n > 0) {
//         n /= 10;
//         count++;
//     }
//     return count;

// }

// void rowWeights(const int weights[], int count, int teams[]) {

//     int whichTeam = 0;
//     int team1Total = 0;
//     int team2Total = 0;
//     for (int i = 0; i < count; i++) {
//         if (whichTeam) {
//             team1Total += weights[i];
//             whichTeam = 1;
//         } else {
//             whichTeam = 0;
//             team2Total += weights[i];
//         }
//     }
//     teams[0] = team1Total;
//     teams[1] = team2Total;

// }

// int cmpFunc (const void *a, const void *b) {
//     return (*(int*)a - *(int*)b);
// }

// int minValue(const int* values, const size_t len)
// {
//   int *theSet = malloc(sizeof(int) * len);
//   int index = 0;
//   int found = 0;
//   for (int i = 0; i < len; i++) {
//     int value = *(values + i);
//     for (int j = 0; j < len; j++) {
//       if(theSet[j] == value) {
//         // dup found
//         found = 1;
//         break;
//       } else {
//         found = 0;
//       }
//     }
//     if (!found) {
//       theSet[index++] = value;
//       found = 1;
//     }
//   }

//   for(int i = 0; i < len; i++) {
//     printf("%d\n", theSet[i]);
//   }
// }

// char *remove_url_anchor(const char *url_in) {

//     int count = 0;
//     for (int i = 0; *(url_in + i) != '\0' ;i++) {
//         printf("Char is : %c\n", *(url_in + i));
//         if (*(url_in + i) == '#') {
//             break;
//         } else {
//             count++;
//         }
//     }
//     char *allocated_string = malloc(sizeof(char) * (count + 1));
//     for (int i = 0; i < count; i++) {
//         *(allocated_string + i) = *(url_in + i);
//     }
//     *(allocated_string + (count)) = '\0';
//     return allocated_string;
// }

// int divisors(int n) {

//     int count = 2;
//     int starter = 2;
//     while (starter < (n / 2)) {
//         if (n % starter == 0) {
//             count++;
//         }
//         starter++;
//     }
//     return count;
// }

// long compareTwoInts(const int *a, const int *b) {
//     return *(a) - *(b);
// }

// long sum_two_smallest_numbers(size_t n, const int numbers[]) {

//     // debug, uncomment if need to use qsort(numbers, n, sizeof(int), compareTwoInts);
//     //return ((long long)numbers[0]) + ((long long)numbers[1]);
//     return 1;
// }

// typedef struct {
//     int r, g, b;
// } rgb;

// double arithmetic(double a, double b, const char* operator) {

//     if (!strcmp("add", operator)) {
//         return a + b;
//     } else if (!strcmp("subtract", operator)) {
//         return a - b;
//     } else if(!strcmp("multiply", operator)) {
//         return a * b;
//     } else if(!strcmp("divide", operator)) {
//         return a / b;
//     } else {
//         return 1.0;
//     }

// }

// typedef long long ll;
// typedef struct Data Data;
// struct Data {
//     ll *array;
//     int sz;
// };

// rgb hex_str_to_rgb(const char *hex_str) {

//     rgb *theValues = malloc(sizeof(rgb));
//     int fIndex = 0;
//     int sIndex = 0;
//     int tIndex = 0;
//     char *firstPart = malloc(sizeof(char) * 3);
//     char *secondPart = malloc(sizeof(char) * 3);
//     char *thirdPart = malloc(sizeof(char) * 3);
//     int count = 0;
//     for (int i = 1; i < 7; i++) {
//         if (i >= 3 && i < 5) {
//             // second part
//             *(secondPart + sIndex++) = *(hex_str + i);
//         } else if (i >= 5 && i < 7) {
//             // third part
//             *(thirdPart + tIndex++) = *(hex_str + i);
//         } else {
//             // first part
//             *(firstPart + fIndex++) = *(hex_str + i);
//         }
//     }
//     int res = strtol(firstPart, NULL, 16);
//     int res2 = strtol(secondPart, NULL, 16);
//     int res3 = strtol(thirdPart, NULL, 16);
//     theValues->r = res;
//     theValues->g = res2;
//     theValues->b = res3;
//     return *theValues;
// }

// int isPrime(ll number) {

//     if (number < 2) {
//         return 1;
//     } else {
//         if (number == 2 || number == 3 || number == 5) {
//             return 1;
//         } else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0) {
//             return 0;
//         } else {
//             for (int i = 2; i <= (sqrt(number) + 1); i++) {
//                 if (number % i == 0) {
//                     return 0;
//                 }
//             }
//             return 1;
//         }
//     }
// }

// int isUniqueBackwards(ll one, ll two) {
//     while (one > 0 && two > 0) {
//         if (one % 10 == two % 10) {
//             one /= 10;
//             two /= 10;
//         } else {
//             return 0;
//         }
//     }
//     return 1;
// }

// int getLongLongBackwards(ll one) {
//     char theStr[19];
//     sprintf(theStr, "%lli", one);
//     const int amt = strlen(theStr);
//     char newStr[amt];
//     for (int i = strlen(theStr) - 1, j = 0; i >= 0; i--, j++) {
//         newStr[j] = theStr[i];
//     }
//     return atoll(newStr);
// }

// int compareLongLong(void *long1, void *long2) {
//     long long value1 = *((long long *)long1);
//     long long value2 = *((long long *)long2);
//     return value1 - value2;
// }

// Data* backwardsPrime(ll start, ll end) {
//     int count = 0;
//     Data *returnData = malloc(sizeof(Data));
//     ll *storageArray = malloc(sizeof(long long) * count);
//     for (ll i = start; i <= end; i++) {
//         ll backwards = getLongLongBackwards(i);
//         if (backwards != i && isPrime(backwards) && isPrime(i)) {
//             count++;
//             storageArray = realloc(storageArray, sizeof(long long) * count);
//             *(storageArray + (count - 1)) = i;
//         }
//     }
//     // debug, uncomment if need to use qsort(storageArray, count, sizeof(long long), compareLongLong);
//     returnData->array = storageArray;
//     returnData->sz = count;
//     return returnData;

// }

// char* playPass(char* s, int n) {

//     // shift letters
//     char lower_letters[] = "abcdefghijklmnopqrstuvwxyz";
//     char upper_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char *tmpString = malloc(sizeof(char) * (strlen(s) + 1));
//     strcpy(tmpString, s);
//     int index = 0;
//     for (int i = 0; tmpString[i] != '\0'; i++) {
//         if (isalpha(tmpString[i])) {
//             // is a letter
//             if (i % 2 == 0) {
//                 // uppercase letter
//                 void *result = strchr(lower_letters, tmpString[i]);
//                 if (result != NULL) {
//                     // shift to upper
//                     char resChar = toupper(tmpString[i]);
//                     for (int j = 0; j < strlen(upper_letters); j++) {
//                         if (upper_letters[j] == resChar) {
//                             index = j + n;
//                             while (index > 25) {
//                                 index -= 26;
//                             }
//                             tmpString[i] = upper_letters[index];
//                             break;
//                         }
//                     }
//                 } else {
//                     // is already upper
//                     for (int j = 0; j < strlen(upper_letters); j++) {
//                         if (upper_letters[j] == tmpString[i]) {
//                             index = j + n;
//                             while (index > 25) {
//                                 index -= 26;
//                             }
//                             tmpString[i] = upper_letters[index];
//                             break;
//                         }
//                     }
//                 }
//             } else {
//                 // lowercase letter
//                 void *result = strchr(upper_letters, tmpString[i]);
//                 if (result) {
//                     // is upper, so downcase
//                     char to_lower = tolower(tmpString[i]);
//                     for (int j = 0; j < strlen(lower_letters); j++) {
//                         if (lower_letters[j] == to_lower) {
//                             index = j + n;
//                             while (index > 25) {
//                                 index -= 26;
//                             }
//                             tmpString[i] = lower_letters[index];
//                         }
//                     }
//                 } else {
//                     // is lower
//                     for (int j = 0; j < strlen(lower_letters); j++) {
//                         if (lower_letters[j] == tmpString[i]) {
//                             index = j + n;
//                             while (index > 25) {
//                                 index -= 26;
//                             }
//                             tmpString[i]  = lower_letters[index];
//                             break;
//                         }
//                     }
//                 }
//             }
//         } else if (isdigit(tmpString[i])) {
//             // is a digit
//             char convert_arr[] = { tmpString[i], '\0'};
//             int atoi_result = atoi(convert_arr);
//             int result = abs(atoi_result - 9);
//             tmpString[i] = result + '0';
//         }
//     }
//     char *res = malloc(sizeof(char) * strlen(s));
//     for (int j = strlen(s) - 1, i = 0; j >= 0; j--, i++) {
//         res[i] = tmpString[j];
//     }
//     res[strlen(s)] = '\0';
//     return res;
// }

// char *intToBinaryAppend(int number) {
//     char decimal[1];
//     char the_binary[8];
//     int index = 0;
//     while (number > 0) {
//         int result = number % 2;
//         the_binary[index] = result + '0';
//         index++;
//         number /= 2;
//     }
//     char *copy = malloc(sizeof(char) * 9);
//     int length = strlen(the_binary);
//     while (length < 8) {
//         the_binary[length] = '0';
//         length++;
//     }
//     for (int i = 7, j = 0; i >= 0; i--, j++) {
//         copy[j] = the_binary[i];
//     }
//     copy[8] = '\0';
//     return copy;
// }

// uint32_t ip_to_uint32(const char *ip) {

//     int binaryIndex = 0;
//     char *token;
//     int place = 1;
//     const size_t strLen = strlen(ip);
//     char the_str[strLen];
//     strcpy(the_str, ip);
//     token = strtok(the_str, ".");
//     char *result;
//     char binary[32];

//     while (token != NULL) {
//         switch (place) {
//             case 1:
//                 result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
//                 strcpy(binary, result);
//                 break;
//             case 2:
//                 result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
//                 strcat(binary, result);
//                 break;
//             case 3:
//                 result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
//                 strcat(binary, result);
//                 break;
//             case 4:
//                 result = intToBinaryAppend(strtol(token, (char **)NULL, 10));
//                 strcat(binary, result);
//                 break;
//         }
//         token = strtok(NULL, ".");
//         place++;
//     }
//     printf("%s", binary);
//     uint32_t total = 0;
//     for (int i = 31, power = 0; i >= 0; i--, power++) {
//         if (binary[i] == '1') {
//             total += pow(2, power);
//         }
//     }
//     return total;

// }

// char *rot13(const char *src) {

//     printf("Passing : %s\n", src);
//     const int src_len = strlen(src);
//     char cpy_src[src_len];
//     char *lower_alphabet = "abcdefghijklmnopqrstuvwxyz";
//     char *upper_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     int index = 0;
//     strcpy(cpy_src, src);
//     for (int i = 0; i < (int)strlen(src); i++) {
//         char letter = cpy_src[i];
//         if (islower(letter)) {
//             for (int j = 0; j < 26; j++) {
//                 if (lower_alphabet[j] == letter) {
//                     int rot_ind = j;
//                     for (int x = 0; x < 13; x++) {
//                         rot_ind++;
//                         if (rot_ind == 26) {
//                             rot_ind = 0;
//                         }
//                     }
//                     cpy_src[i] = lower_alphabet[rot_ind];
//                     break;
//                 }
//             }
//         } else if(isupper(letter)) {
//             for (int j = 0; j < 26; j++) {
//                 if (upper_alphabet[j] == letter) {
//                     // rotate 13
//                     int rot_ind = j;
//                     for (int x = 0; x < 13; x++) {
//                         rot_ind++;
//                         if (rot_ind == 26) {
//                             rot_ind = 0;
//                         }
//                     }
//                     cpy_src[i] = upper_alphabet[rot_ind];
//                     break;
//                 }
//             }
//         }
//     }
//     char *malloced_copy = malloc(sizeof(char) * strlen(cpy_src));
//     strcpy(malloced_copy, cpy_src);
//     return malloced_copy;

// }

// int compareFunc(const void *a, const void *b) {

//     return *(int *)a - *(int *)b;

// };

// long long next_smaller_number(unsigned long long n) {

//     unsigned long long origNumber = n;
//     char number[100];
//     sprintf(number, "%llu", n);
//     char *copy = malloc(sizeof(char) * 2);
//     copy[1] = '\0';
//     int loopVar = 1;
//     int values[100];
//     int index = 0;
//     while (loopVar) {
//         for (int i = strlen(number) - 1; i >= 0; i--) {

//             if (i == 0) {
//                 // cannot check prev digit, check forward digit
//             } else {
//                 int prevDigit, currDigit;
//                 copy[0] = number[i - 1];
//                 sscanf(copy, "%d", &prevDigit);
//                 copy[0] = number[i];
//                 sscanf(copy, "%d", &currDigit);
//                 if ((prevDigit > currDigit || (currDigit != 0 && prevDigit == 0)) && (currDigit != 0)) {
//                     char tmpDigit = number[i - 1];
//                     number[i - 1] = number[i];
//                     number[i] = tmpDigit;
//                     break;
//                 } else if (prevDigit != 0 && currDigit != 0) {
//                     loopVar = 0;
//                     break;
//                 }

//             }
//             values[index++] = strtol(number, (char **)NULL, 10);

//         }
//     }
//     qsort(values, index + 1, sizeof(int), compareFunc);
//     const int min = values[0];
//     long long result = strtol(number, (char **)NULL, 10);
//     return min != origNumber ? min : -1;
// }

// int numPrimeFactors(int number) {
//     int count = 0;
//     for (int i = 0; i <= number / 2; i++) {
//         if (isPrime(i) && number % i == 0) {
//             count++;
//         }
//     }
//     return count;
// }
// // struct node {
// //     int data;
// //     struct node *next;
// // };
// // struct list {
// //     size_t sz;
// //     struct node *head;
// // };

// // struct list* createList();

// // // push data at the head of the list
// // void insertFirst(struct list* l, int data) {
// //     if (l->head == NULL) {
// //         l->head->data = data;
// //         l->head->next = NULL;
// //     }
// // }

// // struct list* reverse(struct list* l);

// // void listFree(struct list* l);

// // // functions to write
// // struct list* kPrimes(int k, int start, int nd)
// // {
// //     createList();
// //     for (int i = start; i <= nd; i++) {
// //         if (numPrimeFactors(i) == k) {

// //         }
// //     }
// // }

// int puzzle(int s)
// {
//     // your code
//     return -1;
// }

// int numLength(int number) {

//     int count = 1;
//     while (number > 9) {
//         number /= 10;
//         count++;
//     }
//     return count;

// }

// int *up_array(const int *arr, unsigned *count) {

//     int *sub_arr = (int *)malloc(sizeof(int) * *count);
//     for (int i = 0; i < *count; i++) {
//       sub_arr[i] = arr[i];
//     }
//     for (int i = 0; i < *count; i++) {
//       printf("%d, ", sub_arr[i]);
//     }
//     for (int i = 0; i < *count; i++) {
//       if (sub_arr[i] > 9 || sub_arr[i] < 0) {
//         return NULL;
//       }
//     }
//     if(sub_arr[*count - 1] == 9) {
//       for (int i = *count - 1; i >= 0; i--) {
//         if (sub_arr[i] == 9) {
//           if (i == 0) {
//             // found the edge case
//             *count = *count + 1;
//             int *newArr = (int *)malloc(sizeof(int) * (*count + 1));
//             newArr[0] = 1;
//             for (int i = 1; i < *count; i++) {
//               newArr[i] = 0;
//             }
//             return newArr;
//           }
//           sub_arr[i] = 0;
//         } else if (sub_arr[i] < 0 || sub_arr[i] > 9) {
//             return NULL;
//         } else {
//             sub_arr[i] = sub_arr[i] + 1;
//             break;
//         }
//       }
//       return sub_arr;
//     } else if (sub_arr[*count - 1] < 0) {
//         return NULL;
//     } else {
//       sub_arr[(*count) - 1] = sub_arr[(*count) - 1] + 1;
//     }
//     return sub_arr;
// }

// // https://www.codewars.com/kata/591f3a2e4e5471989000013d/train/c
// char *parse(const char *source) {

//     const int sourceLen = strlen(source);
//     char sourcecpy[sourceLen];
//     strcpy(sourcecpy, source);
//     char *newLineSplit = strtok(sourcecpy, "\n");

//     char newStr[sourceLen];
//     int newStrInd = 0;

//     int gotoFound = 0;
//     char number[sourceLen];
//     while (newLineSplit != NULL) {

//         if (gotoFound && strstr(newLineSplit, number)) {
//             // found line
//             gotoFound = 0;
//             for(int i = 0, foundSpace = 0; i < strlen(newLineSplit); i++) {
//                 if (!foundSpace && newLineSplit[i] == ' ') {
//                     foundSpace = 1;
//                 }
//                 else if (foundSpace) {
//                     newStr[newStrInd++] = newLineSplit[i];
//                 }
//             }
//             newStr[newStrInd++] = ' ';
//             newStr[newStrInd] = '\0';
//         }
//         else if (strstr(newLineSplit, "goto")) {
//             // goto found
//             gotoFound = 1;
//             for (int i = 5, j = 0; i < strlen(newLineSplit); i++, j++) {
//                 number[j] = newLineSplit[i];
//                 number[j + 1] = '\0';
//             }
//         } else if (!gotoFound) {
//             for(int i = 0, foundSpace = 0; i < strlen(newLineSplit); i++) {
//                 if (!foundSpace && newLineSplit[i] == ' ') {
//                     foundSpace = 1;
//                 }
//                 else if (foundSpace) {
//                     newStr[newStrInd++] = newLineSplit[i];
//                 }
//             }
//             newStr[newStrInd++] = ' ';
//             newStr[newStrInd] = '\0';
//         }

//         newLineSplit = strtok(NULL, "\n");

//     }
//     int len = strlen(newStr);
//     newStr[len - 1] = '\0';
//     char *returnStr = (char *)malloc(sizeof(char) * strlen(newStr));
//     strcpy(returnStr, newStr);
//     return returnStr;
// }

// int **multiplication_table(int n) {

//     int **table = (int **)malloc(sizeof(int *) * n);
//     int *values = (int *)malloc(sizeof(int) * n * n);
//     int placerInd = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             values[placerInd++] = i * j;
//         }
//     }

//     for (int i = 0, j = 0; i < n*n; i += n, j++) {
//         table[j] = &values[i];
//     }

//     return table;

// }

// int largest_five_digits(const char *digits)
// {
//     char *substr = malloc(sizeof(char) * 6);
//     memcpy(substr, digits, sizeof(char) * 5);
//     int maxNum = atoi(substr);
//     for (int i = 5; i < strlen(digits); i++) {
//         substr[0] = substr[1];
//         substr[1] = substr[2];
//         substr[2] = substr[3];
//         substr[3] = substr[4];
//         substr[4] = digits[i];
//         int value = atoi(substr);
//         maxNum = value > maxNum ? value : maxNum;
//     }
//     free(substr);
//   return maxNum;

// }

// void digitize (uint64_t n, uint8_t digits[], size_t *length_out) {

//     int index = *length_out - 1;
//     while (n > 0) {
//         digits[index] = n % 10;
//         n /= 10;
//     }

// }

// char *double_char (const char *string, char *doubled) {

//     doubled = malloc(sizeof(char) * strlen(string) * 2 + 1);
//     for (int i = 0, j = 0; j < strlen(string); j++) {
//         doubled[i++] = string[j];
//         doubled[i++] = string[j];
//     }
//     doubled[strlen(doubled)] = '\0';
//     return doubled;
// }

// char *switchItUp(int number) {

//     switch(number) {
//         case 0:
//             return "Zero";
//         case 1:
//             return "One";
//         case 2:
//             return "Two";
//         case 3:
//             return "Three";
//         case 4:
//             return "Four";
//         case 5:
//             return "Five";
//         case 6:
//             return "Six";
//         case 7:
//             return "Seven";
//         case 8:
//             return "Eight";
//         case 9:
//             return "Nine";
//         default:
//             return "None";
//     }

// }

// long arr_plus_arr(const int *a, const int *b, size_t na, size_t nb) {

//     long total = 0;
//     for (int i = 0, j = 0; i < na; i++, j++) {
//         total += a[j];
//     }
//     for (int i = 0, j = 0; i < nb; i++, j++) {
//         total += b[j];
//     }
//     return total;

// }

// bool validate_row_col(int *arr) {
//     bool found_elem[] = {false, false, false, false, false, false, false, false, false};
//     for (int i = 0; i < 9; i++) {
//         found_elem[arr[i] - 1] = true;
//     }
//     int tCount = 0;
//     for (int i = 0; i < 9; i++) {
//         if (found_elem[i] == true) {
//             tCount++;
//         }
//     }
//     return tCount == 9;
// }

// bool validSolution(unsigned int board[9][9]) {

//     // check rows first
//     int row[9];
//     int col[9];
//     for (int i = 0; i < 9; i++) {
//         for (int k = 0; k < 9; k++) {
//             row[k] = board[i][k];
//             col[k] = board[k][i];
//         }
//         bool result = validate_row_col(col) && validate_row_col(row);
//         if (!result) {
//             return false;
//         }
//     }
//     // validated rows and columns
//     // now do 3x3 grids
//     int grid[9];
//     int index = 0;
//     for (int r = 0; r < 9; r += 3) {
//         for (int starter = 0; starter < 9; starter += 3) {
//             for (int i = r; i < r + 3; i++) {
//                 for (int j = starter; j < starter + 3; j++) {
//                     grid[index++] = board[i][j];
//                 }
//             }
//             bool result = validate_row_col(grid);
//             if (!result) {
//                 return false;
//             }
//             index = 0;
//         }
//     }
//     return true;

// }

// int F(int);
// int M(int);

// int M(int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         return n - F(M(n - 1));
//     }
// }

// int F(int n) {

//     if (n == 0) {
//         return 1;
//     } else {
//         return n - M(F(n - 1));
//     }

// }

// enum light {GREEN, YELLOW, RED};

// enum light update_light(enum light light) {
//     if (light == GREEN) {
//         return YELLOW;
//     } else if (light == YELLOW) {
//         return RED;
//     } else {
//         return GREEN;
//     }
// }

// char *dot(unsigned width, unsigned height) {

//     int chars = 6;
//     char *container = (char *)malloc(sizeof(char) * chars);
//     strcpy(container, "");
//     for (int j = 0; j < height; j++) {
//         for (int i = 0; i < width; i++) {
//             strcat(container, "+---");
//             chars += 6;
//             container = realloc(container, sizeof(char) * chars);
//         }
//         strcat(container, "+");
//         strcat(container, "\n");
//         // row created, now do inner row
//         for (int w = 0; w < width; w++) {
//             chars += 6;
//             container = realloc(container, sizeof(char) * chars);
//             strcat(container, "| o ");
//         }
//         strcat(container, "|\n");
//     }
//     for (int i = 0; i < width; i++) {
//         strcat(container, "+---");
//         chars += 6;
//         container = realloc(container, sizeof(char) * chars);
//     }
//     strcat(container, "+");
//     container[strlen(container)] = '\0';
//     return container;
// }

// void evolve(size_t rows, size_t cols, const bool cur_gen[rows][cols], bool next_gen[rows][cols]) {

//     for (int i = sizeof(bool); i < rows; i++) {

//         for (int j = sizeof(bool); j < cols; j++) {

//             bool result = cur_gen[i][j];
//             int liveCells = 0;
//             if (i > 0) {
//                 liveCells += cur_gen[i - 1][j];
//             }
//             // down
//             if (i < (rows - sizeof(bool))) {
//                 liveCells += cur_gen[i + 1][j];
//             }
//             // right
//             if (j < (cols - sizeof(bool))) {
//                 liveCells += cur_gen[i][j + 1];
//             }
//             // left
//             if (j > 0) {
//                 liveCells += cur_gen[i][j - 1];
//             }
//             // up-left
//             if (i > 0 && j > 0) {
//                 liveCells += cur_gen[i - 1][j - 1];
//             }
//             // down-left
//             if (i < (rows - sizeof(bool))) {
//                 liveCells += cur_gen[i + 1][j - 1];
//             }
//             // up-right
//             if (i > 0 && j < (cols - sizeof(bool))) {
//                 liveCells += cur_gen[i - 1][j + 1];
//             }
//             // down-right
//             if (i < (rows - sizeof(bool)) && j < (cols - sizeof(bool))) {
//                 liveCells += cur_gen[i + 1][j + 1];
//             }
//             if (liveCells == 3 && !result) {
//                 // cell becomes a live cell
//                 next_gen[i][j] = true;
//             } else {
//                 if (result) {
//                     if (liveCells < 2) {
//                         next_gen[i][j] = false;
//                     } else if (liveCells > 3) {
//                         next_gen[i][j] = false;
//                     } else if (liveCells == 2 || liveCells == 3) {
//                         next_gen[i][j] = true;
//                     } else {
//                         next_gen[i][j] = cur_gen[i][j];
//                     }
//                 } else {
//                     next_gen[i][j] = cur_gen[i][j];
//                 }
//             }
//         }
//     }
// };

// /// chess moves

// #include <stdbool.h>
// #include <stdio.h>

// void knight_mark_chessboard(int i, int j, char chessboard_clone[8][8]) {
//     // up-left
//     printf("\nin knight mark\n");
//     if ((i - 2) >= 0 && (j - 1) >= 0) {
//         if (chessboard_clone[i - 2][j - 1] == ' ' || chessboard_clone[i - 2][j - 1] == 'K') {
//             chessboard_clone[i - 2][j - 1] = 'T';
//         }
//     }
//     // up-right
//     if ((i - 2) >= 0 && (j + 1) < 8) {
//         if (chessboard_clone[i - 2][j + 1] == ' ' || chessboard_clone[i - 2][j + 1] == 'K') {
//             chessboard_clone[i - 2][j + 1] = 'T';
//         }
//     }
//     // left-up and left-down
//     if ((i - 1) >= 0 && (j - 2) >= 0) {
//         if (chessboard_clone[i - 1][j - 2] == ' ' || chessboard_clone[i - 1][j - 2] == 'K') {
//             chessboard_clone[i - 1][j - 2] = 'T';
//         }
//     }
//     if ((i + 1) < 8 && (j - 2) >= 0) {
//         if (chessboard_clone[i + 1][j - 2] == ' ' || chessboard_clone[i + 1][j - 2] == 'K') {
//             chessboard_clone[i + 1][j - 2] = 'T';
//         }
//     }
//     // right-up and right-down
//     if ((i - 1) >= 0 && (j + 2) < 8) {
//         if (chessboard_clone[i - 1][j + 2] == ' ' || chessboard_clone[i - 1][j + 2] == 'K') {
//             chessboard_clone[i - 1][j + 2] = 'T';
//         }
//     }
//     if ((i + 1) < 8 && (j + 2) < 8) {
//         if (chessboard_clone[i + 1][j + 2] == ' ' || chessboard_clone[i + 1][j + 2] == 'K') {
//             chessboard_clone[i + 1][j + 2] = 'T';
//         }
//     }
//     // down-left and down-right
//     if ((i + 2) < 8 && (j - 1) >= 0) {
//         if (chessboard_clone[i + 2][j - 1] == ' ' || chessboard_clone[i + 2][j - 1] == 'K') {
//             chessboard_clone[i + 2][j - 1] = 'T';
//         }
//     }
//     if ((i + 2) < 8 && (j + 1) < 8) {
//         if (chessboard_clone[i + 2][j + 1] == ' ' || chessboard_clone[i + 2][j + 1] == 'K') {
//             chessboard_clone[i + 2][j + 1] = 'T';
//         }
//     }
// }

// void pawn_mark_chessboard(int i, int j, char chessboard_clone[8][8]) {
//     printf("\nin pawn mark\n");
//     if ((i + 1) < 8 && (j - 1) >= 0) {
//         if (chessboard_clone[i + 1][j - 1] == ' ' || chessboard_clone[i + 1][j - 1] == 'K') {
//             chessboard_clone[i + 1][j - 1] = 'T';
//         }
//     }
//     if ((i + 1) < 8 && (j + 1) < 8) {
//         if (chessboard_clone[i + 1][j + 1] == ' ' || chessboard_clone[i + 1][j + 1] == 'K') {
//             chessboard_clone[i + 1][j + 1] = 'T';
//         }
//     }
// }

// void diagonal_mark_chessboard(int i, int j, char chessboard_clone[8][8]) {
//     // diagonal up-left, up-right
//     printf("\nin diagonal mark\n");
//     for (int xru = i, yru = j, xlu = i, ylu = j; (xru >= 0 && yru < 8) || (xlu >= 0 && ylu >= 0); xru--, xlu--, yru++, ylu--) {
//         if (xru >= 0 && yru < 8) {
//             if (chessboard_clone[xru][yru] == ' ' || chessboard_clone[xru][yru] == 'K') {
//                 chessboard_clone[xru][yru] = 'T';
//             } else if (xru != i && yru != j && chessboard_clone[xru][yru] != 'T') {
//                 xru = -1;
//                 yru = 8;
//             }
//         }
//         if (xlu >= 0 && ylu >= 0) {
//             if (chessboard_clone[xlu][ylu] == ' ' || chessboard_clone[xlu][ylu] == 'K') {
//                 chessboard_clone[xlu][ylu] = 'T';
//             } else if (xlu != i && ylu != j && chessboard_clone[xlu][ylu] != 'T') {
//                 xlu = -1;
//                 ylu = -1;
//             }
//         }
//     }
//     for (int xld = i, lld = j, xrd = i, lrd = j; (xld < 8 && lld >= 0) || (xrd < 8 && lrd < 8); xrd++, xld++, lld--, lrd++) {
//         if (xld < 8 && lld >= 0) {
//             if (chessboard_clone[xld][lld] == ' ' || chessboard_clone[xld][lld] == 'K') {
//                 chessboard_clone[xld][lld] = 'T';
//             } else if (xld != i && lld != j && chessboard_clone[xld][lld] != 'T') {
//                 xld = 8;
//                 lld = -1;
//             }
//         }
//         if (xrd < 8 && lrd < 8) {
//             if (chessboard_clone[xrd][lrd] == ' ' || chessboard_clone[xrd][lrd] == 'K') {
//                 chessboard_clone[xrd][lrd] = 'T';
//             } else if (xrd != i && lrd != j && chessboard_clone[xrd][lrd] != 'T') {
//                 xrd = 8;
//                 lrd = 8;
//             }
//         }
//     }
// }

// void horizontal_mark_chessboard(int i, int j, char chessboard_clone[8][8]) {
//     printf("\nin horizontal mark\n");
//     for (int xl = j, xr = j; xl >= 0 || xr < 8; xl--, xr++) {
//         if (xl >= 0) {
//             if (chessboard_clone[i][xl] == ' ' || chessboard_clone[i][xl] == 'K') {
//                 chessboard_clone[i][xl] = 'T';
//             } else if (xl != j && chessboard_clone[i][xl] != 'T') {
//                 xl = -1;
//             }
//         }
//         if (xr < 8) {
//             printf("value = [%c]", chessboard_clone[i][xr]);
//             if (chessboard_clone[i][xr] == ' ' || chessboard_clone[i][xr] == 'K') {
//                 chessboard_clone[i][xr] = 'T';
//             } else if (xr != j && chessboard_clone[i][xr] != 'T') {
//                 xr = 8;
//             }
//         }
//     }
// }

// void vertical_mark_chessboard(int i, int j, char chessboard_clone[8][8]) {
//     for (int xu = i, xd = i; xu >= 0 || xd < 8; xu--, xd++) {
//         if (xu >= 0) {
//             if (chessboard_clone[xu][j] == ' ' || chessboard_clone[xu][j] == 'K') {
//                 chessboard_clone[xu][j] = 'T';
//             } else if(xu != i && chessboard_clone[xu][j] != 'T') {
//                 xu = -1;
//             }
//         }
//         if (xd < 8) {
//             if (chessboard_clone[xd][j] == ' ' || chessboard_clone[xd][j] == 'K') {
//                 chessboard_clone[xd][j] = 'T';
//             } else if (xd != i && chessboard_clone[xd][j] != 'T') {
//                 xd = 8;
//             }
//         }
//     }
// }

// bool king_is_in_check (const char chessboard[8][8]) {

//     char chessboard_clone[8][8];
//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             chessboard_clone[i][j] = chessboard[i][j];
//         }
//     }

//     for (int xx = 0; xx < 8; xx++) {
//         printf("[");
//         for (int yy = 0; yy < 8; yy++) {
//           if (yy == 7) {
//             printf("%c", chessboard_clone[xx][yy]);
//           } else {
//             printf("%c, ", chessboard_clone[xx][yy]);
//           }
//         }
//         printf("]\n");
//     }

//     int kingX = -1;
//     int kingY = -1;

//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             if (kingX == -1 && chessboard[i][j] == 'K') {
//                 kingX = i;
//                 kingY = j;
//             }
//         }
//     }

//     for (int i = 0; i < 8; i++) {
//         for (int j = 0; j < 8; j++) {
//             if (kingX == -1 && chessboard[i][j] == 'K') {
//                 kingX = i;
//                 kingY = j;
//             }
//             char theCurrentPiece = chessboard[i][j];
//             switch (theCurrentPiece) {
//                 case 'Q': {
//                     diagonal_mark_chessboard(i, j, chessboard_clone);
//                     vertical_mark_chessboard(i, j, chessboard_clone);
//                     horizontal_mark_chessboard(i, j, chessboard_clone);
//                     break;
//                 }
//                 case 'B': {
//                     diagonal_mark_chessboard(i, j, chessboard_clone);
//                     break;
//                 }
//                 case 'N': {
//                     knight_mark_chessboard(i, j, chessboard_clone);
//                     break;
//                 }
//                 case 'R': {
//                     vertical_mark_chessboard(i, j, chessboard_clone);
//                     horizontal_mark_chessboard(i, j, chessboard_clone);
//                     break;
//                 }
//                 case 'P': {
//                     pawn_mark_chessboard(i, j, chessboard_clone);
//                     break;
//                 }
//             }
//         }
//     }
//     return chessboard_clone[kingX][kingY] == 'T';
//     if (chessboard_clone[kingX][kingY] == 'T') {
//         printf("in first if\n board = \n");
//         for (int xx = 0; xx < 8; xx++) {
//           printf("[");
//           for (int yy = 0; yy < 8; yy++) {
//             if (yy == 7) {
//               printf("%c", chessboard_clone[xx][yy]);
//             } else {
//               printf("%c, ", chessboard_clone[xx][yy]);
//             }
//           }
//           printf("]\n");
//         }
//         return true;
//     } else {
//         printf("\n in else, board = \n");
//         for (int xx = 0; xx < 8; xx++) {
//           printf("[");
//           for (int yy = 0; yy < 8; yy++) {
//             if (yy == 7) {
//               printf("%c", chessboard_clone[xx][yy]);
//             } else {
//               printf("%c, ", chessboard_clone[xx][yy]);
//             }
//           }
//           printf("]\n");
//         }
//         // check all surrounding spaces
//         bool surrounding_check = false;
//         // left
//         printf("\n kingy = %d and kingx = %d\n", kingY, kingX);
//         if (kingY > 0) {
//             if (chessboard_clone[kingX][kingY - 1] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // right
//         if (kingY < 7) {
//             if (chessboard_clone[kingX][kingY + 1] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // up
//         if (kingX > 0) {
//             if (chessboard_clone[kingX - 1][kingY] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // down
//         if (kingX < 7) {
//             if (chessboard_clone[kingX + 1][kingY] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // up-left
//         if (kingX > 0 && kingY > 0) {
//             if (chessboard_clone[kingX - 1][kingY - 1] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // up-right
//         if (kingX > 0 && kingY < 7) {
//             if (chessboard_clone[kingX - 1][kingY + 1] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // down-left
//         if (kingX < 7 && kingY > 0) {
//             if (chessboard_clone[kingX + 1][kingY - 1] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         // down-right
//         if (kingX < 7 && kingY < 7) {
//             if (chessboard_clone[kingX + 1][kingY + 1] == 'T') {
//                 surrounding_check = true;
//             } else {
//                 return false;
//             }
//         }
//         printf("surroundingcheck = %s\n", surrounding_check ? "true": "false");
//         return surrounding_check;
//     }

// };

// // struct node {
// //     int data;
// //     struct node *next;
// // };
// struct list {
//     size_t sz;
//     struct node *head;
// };

// struct list* createList();

// // push data at the head of the list
// void insertFirst(struct list* l, int data);

// struct list* reverse(struct list* l);

// void listFree(struct list* l);

// int num_k_prime_factors(int number) {

//     int starter = 2;
//     int cnt = 1;
//     while (number > 1 && !isPrime(number)) {
//         if (number % starter == 0 && isPrime(starter)) {
//             while (number % starter == 0) {
//                 number /= starter;
//                 cnt++;
//             }
//             starter = 2;
//             continue;
//         }
//         starter++;
//     }
//     return cnt;

// }

// // function to write
// int consecKprimes(int k, struct list* l) {
//     // struct list *primes_list = createList();
//     // struct node *tempHead = l->head;
//     // while (tempHead->next != NULL) {
//     //     int num_factors = num_k_prime_factors(tempHead->data);
//     //     insertFirst(primes_list, num_factors);
//     // }
//     // reverse(primes_list)
//     // struct node *primesHead = primes_list->head;
//     // while (primesHead->next != NULL) {

//     // }
//     return -1;
// }

// size_t mag_number(const char *weapon_name, size_t streets) {

//     int totalAmount = ((int)streets) * 3;
//     int mags = 0;
//     if (!strcmp(weapon_name, "PT92")) {
//         while (totalAmount >= 17) {
//             totalAmount -= 17;
//             mags++;
//         }
//         return totalAmount == 0 ? mags : mags + 1;
//     } else if (!strcmp(weapon_name, "M4A1")) {
//         while (totalAmount >= 30) {
//             totalAmount -= 30;
//             mags++;
//         }
//         return totalAmount == 0 ? mags : mags + 1;
//     } else if (!strcmp(weapon_name, "M16A2")) {
//         while (totalAmount >= 30) {
//             totalAmount -= 30;
//             mags++;
//         }
//         return totalAmount == 0 ? mags : mags + 1;
//     } else {
//         while (totalAmount >= 5) {
//             totalAmount -= 5;
//             mags++;
//         }
//         return totalAmount == 0 ? mags : mags + 1;
//     }

// }

// enum parity {EVEN = 0, ODD = 1};

// int check_parity(enum parity goal, const char *bitstring) {

//     int ones = 0;
//     for (int i = 0; i < strlen(bitstring); i++) {
//         if (bitstring[i] == '1') {
//             ones++;
//         }
//     }
//     if (ones % 2 == 0 && goal == ODD) {
//         return 1;
//     } else if (ones % 2 != 0 && goal == EVEN) {
//         return 1;
//     } else {
//         return 0;
//     }

// }

// typedef unsigned int uint;

// void find_multiples(uint n, uint limit, size_t *count, uint multiples[]) {

//     int the_count = 0;
//     int orig_n = n;
//     uint *newArray = malloc(sizeof(uint) * 1);
//     int index = 0;
//     while (n <= limit) {
//         if (n % orig_n == 0) {
//             newArray[index] = n;
//             index++;
//             newArray = realloc(newArray, sizeof(uint) * (index + 1));
//             the_count++;
//         }
//         n += orig_n;
//     }
//     for (int i = 0; i < the_count; i++) {
//         multiples[i] = newArray[i];
//     }
//     free(newArray);
//     *count = the_count;

// }

// char * mini_string_f(char *tape) {
//     int mem_cell = 0;
//     char *the_string = malloc(sizeof(char) * 2);
//     int str_index = 0;
//     int index = 0;
//     while (index < strlen(tape)) {
//         char the_command = tape[index];
//         switch (the_command) {
//             case '+': {
//                 if (mem_cell == 256) {
//                     mem_cell = 0;
//                 } else {
//                     mem_cell++;
//                 }
//                 break;
//             }
//             default: {
//                 the_string[str_index] = (char)mem_cell;
//                 str_index++;
//                 the_string = realloc(the_string, sizeof(char) * (str_index + 2));
//                 if (the_string == NULL) {
//                     free(the_string);
//                     exit(0);
//                 }
//                 break;
//             }
//         }
//         index++;
//     }
//     return the_string;
// }

// char *unused_digits (char unused[10 + 1], ...) {
//     *unused = "0123456789\0";
//     va_list argp;
//     int number;
//     va_start(argp, number);
//     char *newUnused;
//     while (number != -1) {
//         int value = va_arg(argp, int);
//         char str_val[];
//         itoa(value, str_val, 10);
//         for (int i = 0; i < strlen(str_val); i++) {
//             if (strstr(unused, str_val[i])) {
//                 // found digit in haystack
//                 newUnused = (char *)malloc(sizeof(char) * strlen(unused));
//                 for (int j = 0; j < strlen(unused); j++) {
//                     if (!unused[j] == str_val[i]) {
//                         strcat(newUnused, str_val[i]);
//                     }
//                 }
//             }
//         }
//         strcpy(unused, newUnused);
//     }
//     va_end(argp);
//     return newUnused;
// }

struct node
{
    int value;
    struct node *left, *right;
};

bool search(int n, const struct node *root)
{
    return root && (n == root->value || search(n, root->left) || search(n, root->right));
}

int same_case(char a, char b)
{
    return (islower(a) && islower(b)) || (isupper(a) && isupper(b));
}

unsigned bin_to_decimal(const char *bin)
{

    unsigned long long theNumber = 0;
    int currPow = 0;
    for (int i = strlen(bin) - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
        {
            theNumber += (unsigned long long)pow(2, currPow);
        }
        currPow++;
    }
    return theNumber;
}

int *squareOrSquareRoot(int *array, int length)
{

    int *newArray = malloc(sizeof(int) * length);
    for (int i = 0; i < length; i++)
    {
        int value = *(array + i);
        if (sqrt(value) == floor(sqrt(value)))
        {
            // have an int
            *(newArray + i) = (int)sqrt(value);
        }
        else
        {
            *(newArray + i) = *(array + i) * *(array + i);
        }
    }
    return newArray;
}

char *safeSqrt(double x)
{

    if (x < 0)
    {
        return "invalid input";
    }
    else
    {
        int len = 0;
        double rounded = round(sqrt(x));
        while (rounded > 0)
        {
            rounded /= 10;
            len++;
        }
        char *theString = malloc(sizeof(char) * (len + 2));
        sprintf(theString, "%.1f", sqrt(x));
        return theString;
    }
}

int cmpFunc(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}

void sort_ascending(size_t length, int array[length])
{

    if (array == NULL || length == 0)
    {
        return;
    }
    else
    {
        qsort(array, (int)length, sizeof(int), cmpFunc);
    }
}

int main(void)
{
    safeSqrt(1241241241241);
};