/* The game of rock, paper, scissors. */

#include <ctype.h> /* for isspace() */
#include <stdio.h> /* for printf, etc */
#include <stdlib.h> /* for rand() and srand() */
#include <time.h> /* for time() */

enum r_p_s {
    paper,
    rock,
    scissors,
    game,
    help,
    instructions,
    quit
};

enum outcome {
    win,
    lose,
    tie,
    error
};

typedef enum r_p_s r_p_s;
typedef enum outcome outcome;

outcome compare(r_p_s player_choice, r_p_s machine_choice);

void prn_final_status(int win_cnt, int lose_cnt);
void prn_game_status(int win_cnt, int lose_cnt, int tie_cnt);
void prn_help(void);
void prn_instructions(void);
void report_and_tabulate(
    outcome result,
    int *win_cnt_prt,
    int *lose_cnt_prt,
    int *tie_cnt_prt
);
r_p_s machine_selection(void);
r_p_s player_selection(void);

