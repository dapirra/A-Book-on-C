/* Output:

e f w n y t k d l a y e i r q m o p t j f w w t r y c v j v b o
a b c d e e f f i j j k l m n o o p q r r t t t v v w w w y y y
---
1.2   3.9   9.3   2.8   6.6   8.0   4.9   6.6   7.4   9.1   9.0
8.0   9.0   9.1   1.2   9.3   7.4   6.6   6.6   2.8   3.9   4.9

*/

#include "sort.h"

int main(void) {
    char a[M];
    float b[N];
    int i;

    srand(time(NULL));

    FILL(a, M, "char");
    PRINT(a, M, "%-2c");
    qsort(a, M, sizeof(char), lexico);
    PRINT(a, M, "%-2c");

    printf("---\n");

    FILL(b, N, "float");
    PRINT(b, N, "%-6.1f");
    qsort(b, N, sizeof(float), compare_fractional_part);
    PRINT(b, N, "%-6.1f");

    return 0;
}
