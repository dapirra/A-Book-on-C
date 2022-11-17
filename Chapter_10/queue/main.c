/* Output:

A's schedule:
JOB 1 is 1023
JOB 2 is 5757
JOB 3 is 1007

B's schedule:
JOB 1 is 7702
JOB 2 is 3373

*/

/* Using queues to schedule two resources. */

#include "queue.h"

int main(void) {
    int c;
    int cnt_a = 0;
    int cnt_b = 0;
    data pid; /* process id number */
    queue a, b;

    initialize(&a);
    initialize(&b);

    /* Enqueue the requests. */
    while ((c = getchar()) != EOF) {

        switch (c) {

        case 'A':
            assert(scanf("%u", &pid) == 1);
            if (!full(&a)) {
                enqueue(pid, &a);
            }
            break;

        case 'B':
            assert(scanf("%u", &pid) == 1);
            if (!full(&a)) {
                enqueue(pid, &b);
            }
        }
    }

    /* Dequeue the requests and print them. */
    printf(
        "%s",
        "A's schedule:\n"
    );

    while (!empty(&a)) {
        pid = dequeue(&a);
        printf(
            "JOB %u is %d\n",
            ++cnt_a,
            pid
        );
    }

    putchar('\n');
    printf(
        "%s",
        "B's schedule:\n"
    );

    while (!empty(&b)) {
        pid = dequeue(&b);
        printf(
            "JOB %u is %d\n",
            ++cnt_b,
            pid
        );
    }

    putchar('\n');
    return 0;
}
