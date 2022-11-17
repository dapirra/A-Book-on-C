/* Output:

The size of some fundamental types is computed.

       char:   1 byte
      short:   2 bytes
        int:   4 bytes
       long:   8 bytes
   unsigned:   4 bytes
      float:   4 bytes
     double:   8 bytes
long double:  16 bytes

*/

#include <stdio.h>

int main(void) {
    printf("The size of some fundamental types is computed.\n\n");
    printf("       char: %3lu byte\n", sizeof(char));
    printf("      short: %3lu bytes\n", sizeof(short));
    printf("        int: %3lu bytes\n", sizeof(int));
    printf("       long: %3lu bytes\n", sizeof(long));
    printf("   unsigned: %3lu bytes\n", sizeof(unsigned));
    printf("      float: %3lu bytes\n", sizeof(float));
    printf("     double: %3lu bytes\n", sizeof(double));
    printf("long double: %3lu bytes\n", sizeof(long double));
    return 0;
}
