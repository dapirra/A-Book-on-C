/* Output:

:::::  A TABLE OF POWERS  :::::

1        1        1        1        1        1        1
2        4        8       16       32       64      128
3        9       27       81      243      729     2187
4       16       64      256     1024     4096    16384
5       25      125      625     3125    15625    78125
6       36      216     1296     7776    46656   279936
7       49      343     2401    16807   117649   823543

*/

#include <stdio.h>

#define N 7

long power(int, int);
void prn_heading(void);
void prn_tbl_of_powers(int);

int main(void) {
    prn_heading();
    prn_tbl_of_powers(N);
    return 0;
}

void prn_heading(void) {
    printf("\n:::::  A TABLE OF POWERS  :::::\n\n");
}

void prn_tbl_of_powers(int n) {
    int i, j;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            if (j == 1) {
                printf("%ld", power(i, j));
            } else {
                printf("%9ld", power(i, j));
            }
        }
        putchar('\n');
    }
}

long power(int m, int n) {
    int i;
    long product = 1;

    for (i = 1; i <= n; ++i) {
        product *= m;
    }

    return product;
}
