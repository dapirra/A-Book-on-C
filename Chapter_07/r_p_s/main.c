#include "r_p_s.h"

int main(void) {
    int win_cnt = 0, lose_cnt = 0, tie_cnt = 0;
    outcome result;
    r_p_s player_choice, machine_choice;

    srand(time(NULL)); /* seed the random number generator */
    prn_instructions();

    while ((player_choice = player_selection()) != quit) {
        switch (player_choice) {

        case paper:
        case rock:
        case scissors:
            machine_choice = machine_selection();
            result = compare(player_choice, machine_choice);
            report_and_tabulate(
                result,
                &win_cnt,
                &lose_cnt,
                &tie_cnt
            );
            break;

        case game:
            prn_game_status(win_cnt, lose_cnt, tie_cnt);
            break;

        case help:
            prn_help();
            break;

        case instructions:
            prn_instructions();
            break;

        default:
            printf("\nERROR: Invalid option.\n\n");
            exit(1);
        }
    }

    prn_game_status(win_cnt, lose_cnt, tie_cnt);
    prn_final_status(win_cnt, lose_cnt);
    return 0;
}
