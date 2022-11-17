/* Output:

   Value of i: 7
Location of i: 0x7ffcabd8f87c

*/

/* Printing an address, or location */

#include <stdio.h>

int main(void) {
    int i = 7, *p = &i;

    printf(
        "%s%d\n%s%p\n",
        "   Value of i: ", *p,
        "Location of i: ", p
    );

    return 0;
}
