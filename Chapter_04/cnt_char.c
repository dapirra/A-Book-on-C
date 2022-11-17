/* Output:

$ cnt_char < cnt_char.c

    blanks    digits   letters     lines    others     total

       422        49       399        58       197      1125

*/

/* Count blanks, digits, letters, newlines, and others */

#include <stdio.h>

int main(void) {
    int c,
    blank_cnt = 0,
    digit_cnt = 0,
    letter_cnt = 0,
    nl_cnt = 0,
    other_cnt = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blank_cnt;
        } else if (c >= '0' && c <= '9') {
            ++digit_cnt;
        } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            ++letter_cnt;
        } else if (c == '\n') {
            ++nl_cnt;
        } else {
            ++other_cnt;
        }
    }

    printf(
        "%10s%10s%10s%10s%10s%10s\n\n",
        "blanks",
        "digits",
        "letters",
        "lines",
        "others",
        "total"
    );

    printf(
        "%10d%10d%10d%10d%10d%10d\n\n",
        blank_cnt,
        digit_cnt,
        letter_cnt,
        nl_cnt,
        other_cnt,
        blank_cnt + digit_cnt + letter_cnt + nl_cnt + other_cnt
    );

    return 0;
}
