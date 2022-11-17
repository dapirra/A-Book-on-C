/* Output:

Hi! What's your name? Alice B. Carole

Nice to meet you Alice B. Carole.
Your name spelled backwards is eloraC .B ecilA
and the letters in your name sum to 1142.

Have a nice day!

*/

#include <ctype.h>
#include <stdio.h>

#define MAXSTRING 100

int main(void) {
    char c, name[MAXSTRING];
    int i, sum = 0;

    printf("\nHi! What's your name? ");
    for (i = 0; (c = getchar()) != '\n'; ++i) {
        name[i] = c;
        if (isalpha(c)) {
            sum += c;
        }
    }
    name[i] = '\0';

    printf(
        "\n%s%s%s\n%s",
        "Nice to meet you ", name, ".",
        "Your name spelled backwards is "
    );

    for (--i; i >= 0; --i) {
        putchar(name[i]);
    }

    printf(
        "\n%s%d%s\n\n%s\n",
        "and the letters in your name sum to ",
        sum,
        ".",
        "Have a nice day!"
    );

    return 0;
}
