//
// Created by Gradey Cullins on 4/1/17.
//

#ifndef KR_EXERCISES_CH2_H
#define KR_EXERCISES_CH2_H

#include <limits.h>

/*
 * 2-1
 * Determine ranges of char, short, int
 */
void ranges() {
#define UMIN 0
    printf("char:\t[%d - %d]\n", CHAR_MIN, CHAR_MAX);
    printf("short:\t[%d - %d]\n", SHRT_MIN, SHRT_MAX);
    printf("int:\t[%d - %d]\n", INT_MIN, INT_MAX);
    printf("long:\t[%ld - %ld]\n", LONG_MIN, LONG_MAX);
    printf("uchar:\t[%u - %u]\n", UMIN, UCHAR_MAX);
    printf("ushort:\t[%u - %u]\n", UMIN, USHRT_MAX);
    printf("uint:\t[%d - %u]\n", UMIN, UINT_MAX);
    printf("ulong:\t[%d - %lu]\n", UMIN, ULONG_MAX);
}

/*
 * 2-2
 * Write a loop equivalent to:
 * for (i=0; i<lim-1 && (c=getchar()) != '\n' && c!= EOF; ++i)
 * without using && or ||
 */
int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1; ++i) {
        if ((c = getchar()) == EOF)
            break;
        if (c == '\n')
            break;
        s[i] = c;
    }
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/*
 * 2-3
 * Convert a string of hex digits into an integer value
 */
int htoi(char h[]) {
    int i = 0;

    // strip the 0x
    if (i == 0 && h[i] == '0' && (h[i + 1] == 'x' || h[i + 1] == 'X')) {
        for (i = 0; h[i + 2] != '\0'; ++i)
            h[i] = h[i + 2];
        h[i] = '\0';
    }

    // find length
    int n = 0;
    for (; h[n] != '\0'; ++n) {}

    // convert to lower case
    for (int i = 0; h[i] != '\0'; ++i)
        if (h[i] >= 'A' && h[i] <= 'Z')
            h[i] += 'a' - 'A';

    int res;

    for (int i = 0; i < n; ++i) {
        char c = h[i];
        if (c >= 'a' && c <= 'f') // a-f
            res = 16 * res + (c - 87);
        else // 0-9
            res = 16 * res + (c - '0');
    }
    return res;
}

/*
 * 2-4
 * Delete each character in s that matches any character in r.
 */
void squeeze(char s[], char r[]) {
    int i, j, k, sw;
    for (i = k = sw = 0; s[i] != '\0'; ++i) {
        for (j = 0; r[j] != '\0'; ++j) {
            if (s[i] == r[j]) {
                sw = 1;
                break;
            }
        }
        if (!sw) {
            s[k++] = s[i];
        }
        sw = 0;
    }
    s[j] = '\0';
}

/*
 * 2-5
 * Returns first location in s where any char in string a occurs, or -1 if
 * s contains no chars in a.
 */
int any(char s[], char a[]) {
    int i, j;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; a[j] != '\0'; j++) {
            if (s[i] == a[j]) {
                return i;
            }
        }
    }
    return -1;
}

#endif //KR_EXERCISES_CH2_H
