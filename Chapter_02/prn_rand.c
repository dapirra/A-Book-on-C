/* Output:

Some randomly distributed integers will be printed
How many do you want to see? 23

  1804289383   846930886  1681692777  1714636915  1957747793   424238335   719885386  1649760492   596516649  1189641421
  1025202362  1350490027   783368690  1102520059  2044897763  1967513926  1365180540  1540383426   304089172  1303455736
    35005211   521595368   294702567
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, n;

    printf(
        "\n%s\n%s",
        "Some randomly distributed integers will be printed",
        "How many do you want to see? "
    );

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        if (i % 10 == 0) {
            putchar('\n');
        }
        printf("%12d", rand());
    }

    printf("\n\n");
    return 0;
}
