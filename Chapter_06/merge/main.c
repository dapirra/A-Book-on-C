/* Output:

Before mergeSort()
   4   3   1  67  55   8   0   4  -5  37   7   4   2   9   1  -1
After mergeSort()
  -5  -1   0   1   1   2   3   4   4   4   7   8   9  37  55  67

*/

/* Test merge() and mergeSort() */

#include "mergesort.h"

int main(void) {
    int sz, key[] = {
        4, 3, 1, 67, 55, 8, 0, 4,
        -5, 37, 7, 4, 2, 9, 1, -1
    };

    sz = sizeof(key) / sizeof(int); /* the size of key[] */

    printf("Before mergeSort()\n");
    wrt(key, sz);

    mergeSort(key, sz);

    printf("After mergeSort()\n");
    wrt(key, sz);

    return 0;
}
