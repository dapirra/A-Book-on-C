/* Output:

---
TOWERS OF HANOI

The disks on tower A must be moved to tower C. Only one
disk can be moved at a time, and the order on each tower
must be preserved at each step. Any of the towers A, B,
or C can be used for intermediate placement of a disk.

The problem starts with n disks on Tower A.

Input n: 3

    1: Move disk 1 from tower A to tower C.
    2: Move disk 2 from tower A to tower B.
    3: Move disk 1 from tower C to tower B.
    4: Move disk 3 from tower A to tower C.
    5: Move disk 1 from tower B to tower A.
    6: Move disk 2 from tower B to tower C.
    7: Move disk 1 from tower A to tower C.

*/

#include "hanoi.h"

int cnt = 0; /* Number of moves */

int main(void) {
    int n; /* Number of disks */

    n = get_n_from_user();
    assert(n > 0);

    /*
    // Move n disks from tower A to tower C,
    // using tower B as an intermediate tower.
    */

    move(n, 'A', 'B', 'C'); /* Recursive function */
    return 0;
}
