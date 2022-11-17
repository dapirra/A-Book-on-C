#include "r_p_s.h"

r_p_s machine_selection() {
    return ((r_p_s) (rand() % 3));
}

r_p_s player_selection() {
    char c;
    r_p_s player_choice;

    printf("Input r, p, or s: ");

    while (isspace(c = getchar()));

    switch (c) {
    case 'p':
        player_choice = paper;
        break;
    case 'r':
        player_choice = rock;
        break;
    case 's':
        player_choice = scissors;
        break;
    case 'g':
        player_choice = game;
        break;
    case 'h':
        player_choice = help;
        break;
    case 'i':
        player_choice = instructions;
        break;
    case 'q':
        player_choice = quit;
        break;
    }

    return player_choice;
}
