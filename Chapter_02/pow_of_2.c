/* Output:

2     4     8     16    32    64    128   256   512   1024

*/

#include <stdio.h>

int main(void) {
    int i = 0, power = 1;

    while (++i <= 10) {
        printf("%-6d", power *= 2);
    }

    printf("\n");
    return 0;
}