/* Output:

 First Computation: 1.6448341
Second Computation: 5.7577885

*/

#include "sum_sqr.h"

int main(void) {
    printf(
        "%s%.7f\n%s%.7f\n",
        " First Computation: ", sum_square(f, 1, 10000),
        "Second Computation: ", sum_square(sin, 2, 13)
    );
    return 0;
}
