/* Output:

This program reads an integer value for n, and then
processes n real numbers to find max and min values.

Input n: 5

Input 5 real numbers: 737.7799 -11.2e+3 -777 0.001 3.14159

Maximum value:    737.780
Minimum value -11200.000
*/

#include <stdio.h>

float maximum(float x, float y);
float minimum(float x, float y);
void prn_info(void);

int main(void) {
    int i, n;
    float min, max, x;

    prn_info();
    printf("Input n: ");
    scanf("%d", &n);
    printf("\nInput %d real numbers: ", n);
    scanf("%f", &x);
    max = min = x;

    for (i = 2; i <= n; ++i) {
        scanf("%f", &x);
        max = maximum(max, x);
        min = minimum(min, x);
    }

    printf(
        "\n%s%11.3f\n%s%11.3f\n\n",
        "Maximum value:", max,
        "Minimum value", min
    );

    return 0;
}

float maximum(float x, float y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

float minimum(float x, float y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

void prn_info(void) {
    printf(
        "\n%s\n%s\n\n",
        "This program reads an integer value for n, and then",
        "processes n real numbers to find max and min values."
    );
}
