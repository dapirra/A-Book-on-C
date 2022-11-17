/* Output:

  Cnt   b1   b2   b3   b4   b5   fct1   fct2   majority
    1    0    0    0    0    0     0      0        0
    2    0    0    0    0    1     1      0        0
    3    0    0    0    1    0     0      0        0
    4    0    0    0    1    1     1      1        0
    5    0    0    1    0    0     1      0        0
    6    0    0    1    0    1     1      0        0
    7    0    0    1    1    0     1      0        0
    8    0    0    1    1    1     1      1        1
    9    0    1    0    0    0     0      0        0
   10    0    1    0    0    1     1      0        0
   11    0    1    0    1    0     0      0        0
   12    0    1    0    1    1     1      1        1
   13    0    1    1    0    0     1      0        0
   14    0    1    1    0    1     1      0        1
   15    0    1    1    1    0     1      0        1
   16    0    1    1    1    1     1      1        1
   17    1    0    0    0    0     1      0        0
   18    1    0    0    0    1     1      0        0
   19    1    0    0    1    0     1      0        0
   20    1    0    0    1    1     1      1        1
   21    1    0    1    0    0     1      0        0
   22    1    0    1    0    1     1      0        1
   23    1    0    1    1    0     1      0        1
   24    1    0    1    1    1     1      1        1
   25    1    1    0    0    0     1      1        0
   26    1    1    0    0    1     1      1        1
   27    1    1    0    1    0     1      1        1
   28    1    1    0    1    1     1      1        1
   29    1    1    1    0    0     1      1        1
   30    1    1    1    0    1     1      1        1
   31    1    1    1    1    0     1      1        1
   32    1    1    1    1    1     1      1        1

*/

/* Print a table of values for some boolean functions. */

#include <stdio.h>

int main(void) {
    int b1, b2, b3, b4, b5; /* Boolean variables */
    int cnt = 0;

    printf(
        "\n%5s%5s%5s%5s%5s%5s%7s%7s%11s\n", /* Headings */
        "Cnt", "b1", "b2", "b3", "b4", "b5",
        "fct1", "fct2", "majority"
    );

    for (b1 = 0; b1 <= 1; ++b1)
        for (b2 = 0; b2 <= 1; ++b2)
            for (b3 = 0; b3 <= 1; ++b3)
                for (b4 = 0; b4 <= 1; ++b4)
                    for (b5 = 0; b5 <= 1; ++b5)
                        printf(
                            "%5d%5d%5d%5d%5d%5d%6d%7d%9d\n",
                            ++cnt, b1, b2, b3, b4, b5,
                            b1 || b3 || b5, b1 & b2 || b4 & b5,
                            b1 + b2 + b3 + b4 + b5 >= 3
                        );

    putchar('\n');
    return 0;
}
