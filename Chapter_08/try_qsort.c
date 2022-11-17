/* Output:

---
Before sorting:

      43.7      16.2      60.7      86.6      53.3      11.7
      90.4      47.5       9.9       8.7      84.8
---
After sorting:

      90.4      86.6      84.8      60.7      53.3      47.5
      43.7      16.2      11.7       9.9       8.7

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11 /* Size of the array */

enum when {before, after};
typedef enum when when;

int cmp(const void *vp, const void *vq);
void fill_array(double *a, int n);
void prn_array(when val, double *a, int n);

int main(void) {
    double a[N];

    fill_array(a, N);
    prn_array(before, a, N);
    qsort(a, N, sizeof(double), cmp);
    prn_array(after, a, N);

    return 0;
}

int cmp(const void *vp, const void *vq) {
    const double *p = vp;
    const double *q = vq;
    double diff = *p - *q;

    return ((diff >= 0.0) ? ((diff > 0.0) ? -1 : 0) : +1);
}

void fill_array(double *a, int n) {
    int i;

    srand(time(NULL));

    for (i = 0; i < n; ++i) {
        a[i] = (rand() % 1001) / 10.0;
    }
}

void prn_array(when val, double *a, int n) {
    int i;

    printf(
        "%s\n%s%s\n",
        "---",
        ((val == before) ? "Before" : "After"),
        " sorting:"
    );

    for (i = 0; i < n; ++i) {
        if (i % 6 == 0) {
            putchar('\n');
        }

        printf("%10.1f", a[i]);
    }

    putchar('\n');
}
