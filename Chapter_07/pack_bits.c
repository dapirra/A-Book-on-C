/* Output: abcd = 01100001 01100010 01100011 01100100 */

/* Pack 4 characters into ab int */

#include <limits.h>
#include <stdio.h>

#include "bit_print.c"

int pack(char a, char b, char c, char d) {
    int p = a; /* p will be packed with a, b, c, d */

    p = (p << CHAR_BIT) | b;
    p = (p << CHAR_BIT) | c;
    p = (p << CHAR_BIT) | d;
    return p;
}

int main(void) {
    printf("abcd = ");
    bit_print(pack('a', 'b', 'c', 'd'));
    putchar('\n');

    return 0;
}
