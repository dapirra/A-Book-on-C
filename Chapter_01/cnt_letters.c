/* Output:

$ cnt_letters chapter1 data1

data1 file contents:

A:  223    B:   62    C:  193    D:   31    E:  120    F:   89
G:   21    H:   48    I:  304    J:    1    K:    7    L:   50
M:   67    N:   77    O:   91    P:   71    Q:   19    R:   57
S:  196    T:  439    U:   33    V:    4    W:   68    X:   29
Y:    7    Z:   18

*/

/* Count uppercase letters in a file */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int c, i, letter[26];
    FILE *ifp, *ofp;

    if (argc != 3) {
        printf(
            "\n%s%s%s\n\n%s\n%s\n\n",
            "Usage: ",
            argv[0],
            " infile outfile",
            "The uppercase letters in the infile will be counted",
            "The results will be written in the outfile."
        );
        exit(1);
    }

    ifp = fopen(argv[1], "r");
    ofp = fopen(argv[2], "w");

    /* Initialize all values in letter array to 0 */
    for (i = 0; i < 26; ++i) {
        letter[i] = 0;
    }

    /* Find uppercase letters in the input file */
    while ((c = getc(ifp)) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            ++letter[c - 'A'];
        }
    }

    /* Output results */
    for (i = 0; i < 26; ++i) {
        if (i % 6 == 0) {
            putc('\n', ofp);
        }
        fprintf(ofp, "%c:%5d    ", 'A' + i, letter[i]);
    }

    putc('\n', ofp);
    return 0;
}
