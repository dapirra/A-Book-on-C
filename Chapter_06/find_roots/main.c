/* Output:

For f[1](x) an approximate root is x0 =  1.000000000000023
 Fct evaluation at the root: f[1](x0) =  0.000000000000069
  Number of fct calls to bisection() =  52

For f[2](x) an approximate root is x0 =  1.784414278382185
 Fct evaluation at the root: f[2](x0) =  0.000000000000169
  Number of fct calls to bisection() =  52

For f[3](x) an approximate root is x0 =  1.046387173807117
 Fct evaluation at the root: f[3](x0) = -0.000000000000134
  Number of fct calls to bisection() =  52

*/

/* Use bisection to find the roots */

#include "find_roots.h"

int cnt = 0;
const dbl eps = 1e-13; /* epsilon, a small quantity */

int main(void) {
    int begin_cnt;
    int i;
    int nfct_calls;
    dbl a = -100;
    dbl b = +100;
    dbl root;
    dbl val;
    pfdd f[N] = {NULL, f1, f2, f3};

    for (i = 1; i < N; ++i) {
        assert(f[i](a) * f[i](b) <= 0.0);

        begin_cnt = cnt;
        root = bisection(f[i], a, b);
        nfct_calls = cnt - begin_cnt;
        val = f[i](root);

        printf(
        "%s%d%s% .15f\n%s%d%s% .15f\n%s%3d\n\n",
            "For f[", i, "](x) an approximate root is x0 = ", root,
            " Fct evaluation at the root: f[", i, "](x0) = ", val,
            "  Number of fct calls to bisection() = ", nfct_calls
        );
    }

    return 0;
}
