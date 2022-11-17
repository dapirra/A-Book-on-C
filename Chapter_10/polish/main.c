/* Output:

Polish expression: 13, 4, -, 2, 3, *, +

stack count:  7     kind: value       val: 13
stack count:  6     kind: value       val:  4
stack count:  5     kind: operator     op:  -
stack count:  4     kind: value       val:  2
stack count:  3     kind: value       val:  3
stack count:  2     kind: operator     op:  *
stack count:  1     kind: operator     op:  +
stack count:  0

Polish evaluation: 15

*/

#include "polish.h"

int main(void)
{
    char str[] = "13, 4, -, 2, 3, *, +";
    stack polish;

    printf(
        "\n%s%s\n\n",
        "Polish expression: ",
        str
    );

    fill(&polish, str);
    wrt_stack(&polish);

    printf(
        "\n%s%d\n\n",
        "Polish evaluation: ",
        evaluate(&polish)
    );

    return 0;
}
