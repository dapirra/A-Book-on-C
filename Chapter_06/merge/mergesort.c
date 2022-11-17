/* Mergesort: use merge() to sort an array of size n. */

#include "mergesort.h"

void mergeSort(int key[], int n) {
    int j, k, m, *w;

    for (m = 1; m < n; m *= 2);

    if (n < m) {
        printf("ERROR: Array size not a power of 2 - bye!\n");
        exit(1);
    }

    w = calloc(n, sizeof(int)); /* Allocate workspace */
    assert(w != NULL); /* Check that calloc() worked */

    for (k = 1; k < n; k *= 2) {
        for (j = 0; j < n - k; j += 2 * k) {
            /*
            // Merge two subarrays of key[] into subarray of w[].
            */
            merge(
                key + j,
                key + j + k,
                w + j,
                k,
                k
            );
        }

        for (j = 0; j < n; ++j) {
            key[j] = w[j]; /* Write 2 back into key */
        }
    }

    free(w); /* Free the workspace */
}
