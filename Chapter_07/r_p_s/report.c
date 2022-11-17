#include "r_p_s.h"
#include <stdio.h>

void report_and_tabulate(
    outcome result,
    int *win_cnt_prt,
    int *lose_cnt_prt,
    int *tie_cnt_prt
) {
    switch (result) {

    case win:
        ++*win_cnt_prt;
        printf("%27sYou win.\n", "");
        break;

    case lose:
        ++*lose_cnt_prt;
        printf("%27sYou lose.\n", "");
        break;

    case tie:
        ++*tie_cnt_prt;
        printf("%27sIt's a tie.\n", "");
        break;

    default:
        printf("\nError: Unexpected result!\n\n");
        exit(1);
    }
}
