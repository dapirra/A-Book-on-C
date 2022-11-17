#include <stdio.h>

int main(void) {

    {
        int a = 2; /* outer block a */
        printf("%d\n", a); /* 2 is printed */

        {
            int a = 5; /* inner block a */
            printf("%d\n", a); /* 5 is printed */
        }

        printf("%d\n", ++a); /* 3 is printed */
    }

    printf("\n");

    {
        int a_outer = 2;
        printf("%d\n", a_outer);

        {
            int a_inner = 5;
            printf("%d\n", a_inner);
        }

        printf("%d\n", ++a_outer);
    }

    printf("\n");

    {
        int a = 1, b = 2, c = 3;
        printf("%3d%3d%3d\n", a, b, c); /* 1  2  3 */

        {
            int b = 4;
            float c = 5.0;
            printf("%3d%3d%5.1f\n", a, b, c); /* 1  4  5.0 */

            a = b;

            {
                int c;
                c = b;
                printf("%3d%3d%3d\n", a, b, c); /* 4  4  4 */
            }

            printf("%3d%3d%5.1f\n", a, b, c); /* 4  4  5.0 */
        }

        printf("%3d%3d%3d\n", a, b, c); /* 4  2  3 */
    }

}
