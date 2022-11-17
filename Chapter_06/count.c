/* Output: There are 8 words in the string. */

/* Count the number of words in a string */

#include <stdio.h>
#include <ctype.h>

int word_cnt(const char *s) {
    int cnt = 0;

    while (*s != '\0') {
        while (isspace(*s)) {
            ++s;
        }

        if (*s != '\0') {
            ++cnt;
            while (!isspace(*s) && *s != '\0') {
                ++s;
            }
        }
    }

    return cnt;
}

int main(void) {
    printf(
        "There are %d words in the string.\n",
        word_cnt("Count the number of words in a string")
    );

    return 0;
}
