//
// Created by Gradey Cullins on 4/1/17.
//

#ifndef KR_EXERCISES_CH1_H
#define KR_EXERCISES_CH1_H

#include <stdio.h>

/*
 * 1-1
 * hello world - god i'm fucking awful at programming
 */
int hello_world() {
    printf("hello, world");
    return 3 * 496;
}

/*
 * 1-2
 * what happens when printing an unknown escape code?
 * compile: warning: unknown escape sequence '\z' [-Wunknown-escape-sequence] printf("\z");
 * run: z
 */
//void print_fail() {
//    printf("\z");
//}

/*
 * 1-3
 * print a header over fahr conversion
 */
void fahr_header() {
#define LOWER 0
#define UPPER 300
#define STEP 20
    float fahr;
    printf("fahrenheit\tcelsius\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3.0f\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));
}

/*
 * 1-4
 * convert celsius to fahr
 */
void cels_to_fahr() {
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("celsius\tfahrenheit\n");
    while (celsius <= upper) {
        fahr = (9*celsius/5) + 32;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}

/*
 * 1-5
 * print the fahr output in reverse
 */
void reverse_fahr_header() {
    float fahr;
    printf("fahrenheit\tcelsius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%3.0f\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));
}

/*
 * 1-6
 * verify that getchar() != EOF is 0 or 1
 */
void verify_eof() {
    printf("%d\n", EOF != getchar());
}

/*
 * 1-7
 * print the value of EOF
 */
void print_eof() {
    printf("%d\n", EOF);
}

/*
 * 1-8
 * count blanks, tabs, newlines
 */
void invis_counter() {
    int nb = 0;
    int nt = 0;
    int nl = 0;

    char c;

    while ((c = getchar()) != EOF)
        switch (c) {
            case ' ':
                nb++;
                break;
            case '\t':
                nt++;
                break;
            case '\n':
                nl++;
        }

    printf("blanks: %d\ntabs: %d\nlines: %d\n", nb, nt, nl);
}

/*
 * 1-9
 * replace input multiple blanks with only 1 blank
 */
void replace_blanks() {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
        }
        putchar(c);
    }
}

/*
 * 1-10
 * replace invis chars with escape codes
 */
void replace_invis() {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}

/*
 * 1-11
 * try using edge case input like one single large word, no words, all newlines, all tabs, etc. Mix in numbers and any other
 * utf-8 chars to see how input is handled
 */

/*
 * 1-12
 * print input one word at a time
 */
void word_per_line() {
#define IN  1
#define OUT 0
    char c;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
            if (state == IN)
                putchar('\n');
            state = OUT;
        } else {
            state = IN;
            putchar(c);
        }
    }
}

/*
 * 1-13
 * print a histogram of lengths of words
 */
void word_histogram() {
    char c;
    int state = OUT;
    int count = 0;
    int i;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
            if (state == IN) {
                putchar('\t');
                for (i = 0; i < count; ++i)
                    printf("|");
                putchar('\n');
            }
            state = OUT;
            count = 0;
        } else {
            state = IN;
            ++count;
            putchar(c);
        }
    }
}

/*
 * 1-14
 * print histogram of char frequency
 */
void char_histogram() {
#define COUNT 128
    char c;
    int chars[COUNT];
    int i;

    for (i = 0; i < COUNT - 1; ++i)
        chars[i] = 0;

    while ((c = getchar()) != EOF) {
        chars[c] = chars[c] + 1;
        if (c == ' ' || c == '\n' || c == '\t' || c == '\b') {
            switch (c) {
                case ' ':
                    printf(" ");
                    break;
                case '\n':
                    printf("\\n");
                    break;
                case '\t':
                    printf("\\t");
                    break;
                case '\b':
                    printf("\\b");
                    break;
            }
        } else {
            putchar(c);
        }

        putchar(' ');
        for (i = 0; i < chars[c]; ++i)
            printf("|");
        putchar('\n');
    }
}

/*
 * 1-15
 * rewrite temp conversion using function -- see cels_to_fahr
 */

/*
 * 1-16
 * find the longest line of input
 */
#define MAXLINE 1000
int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void longest_line() {
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
        printf("%slength: %d\n", line, len);
    }

    if (max > 0)
        printf("%s", longest);
}

/* END 1-16 */

/*
 * 1-17
 * print input lines larger than 80 chars
 */
void print_80_lines() {
    int max = 1000;
    char line[max];
    int i = 0;
    char c;

    while ((c = getchar()) != EOF) {
        line[i++] = c;
        if (c == '\n') {
            line[i] = '\0';
            if (i > 80)
                printf("%s", line);
            i = 0;
        }
    }
}

/*
 * 1-18
 * remove trailing blanks and tabs from input, delete blank lines
 */
#define MAXLINE 1000

void rem_trail_blanks() {
    char line[MAXLINE];
    char c;
    int i = 0;
    int len = 0;

    while ((len = getLine(line, MAXLINE)) > 0) {
        for (--len; line[len] == ' ' || line[len] == '\t'; --len)
            ;
        line[++len] = '\0';
        printf("%s", line);
    }
}

/*
 * 1-19
 * reverse char string s
 */
void reverse() {
    char line[MAXLINE];
    char c;
    int i = 0;
    int len = 0;

    while ((len = getLine(line, MAXLINE)) > 0) {
        char r[MAXLINE];
        int n = 0;
        int i = 0;

        for (; n < MAXLINE; ++n)
            if (line[n] == '\0')
                break;
        for (n -= 2; n >= 0; --n)
            r[i++] = line[n];
        r[i++] = '\n';
        r[i] = '\0';
        for (i = 0; i < MAXLINE; ++i)
            line[i] = r[i];
        printf("%s", line);
    }
}

/*
 * 1-20
 * replace tabs with blanks
 */
#define TAB 8
void detab() {
    char c;
    int pos = 0;
    int space;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            space = TAB - ((pos) % TAB);
            while (space > 0) {
                putchar(' ');
                ++pos;
                --space;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 0;
        } else {
            putchar(c);
            ++pos;
        }
    }
}

/*
 * 1-21
 * TODO
 */

/*
 * 1-22
 * TODO
 */

/*
 * 1-23
 * remove all comments from a c program
 */
#define OUT 0
#define MAX 1000
void decomment() {
    char c;
    char line[MAX];
    int state = OUT;
    int len;
    int i;

    while ((len = getLine(line, MAX)) > 0) {
        if (state == OUT) {
            --len;
            for (i = 0; i < len; ++i) {
                if (line[i] == '/' && line[i+1] == '*')
                    state = IN;
                else if (line[i] == '/' && line[i+1] == '/') {
                    break;
                } else if (line[i] == '*' && line[i+1] == '/') {
                    state = OUT;
                    i++;
                } else if (state == OUT)
                    putchar(line[i]);
            }
            putchar('\n');
        } else {
            for (i = 0; i < len; ++i) {
                if (line[i] == '*' && line[i+1] == '/')
                    state = OUT;
            }
        }
    }
}

/*
 * 1-24
 * TODO
 */

#endif //KR_EXERCISES_CH1_H
