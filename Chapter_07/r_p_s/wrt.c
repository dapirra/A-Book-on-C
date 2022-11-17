#include "r_p_s.h"

void prn_final_status(int win_cnt, int lose_cnt) {
    if (win_cnt > lose_cnt) {
        printf("Congratulations, you won!\n\n");
    } else if (win_cnt == lose_cnt) {
        printf("A Draw, you tied!\n\n");
    } else {
        printf("You lost!\n\n");
    }
}

void prn_game_status(int win_cnt, int lose_cnt, int tie_cnt) {
    printf("\n%s\n%s%4d\n%s%4d\n%s%4d\n%s%4d\n\n",
        "Game Status:",
        "   Win:   ", win_cnt,
        "   Lose:  ", lose_cnt,
        "   Tie:   ", tie_cnt,
        "   Total: ", win_cnt + lose_cnt + tie_cnt
    );
}

void prn_help(void) {
    printf(
        "\n%s\n",
        "The following characters can be used for input:\n"
        "    p for paper\n"
        "    r for rock\n"
        "    s for scissors\n"
        "    g for print the game status\n"
        "    h prints this help list\n"
        "    i prints the instructions\n"
        "    q quit this game\n"
    );
}

void prn_instructions(void) {
    printf(
        "\n%s\n",
        "Rock Paper Scissors\n"
        "\n"
        "   In this game,\n"
        "       p is for 'paper'\n"
        "       r is for 'rock'\n"
        "       s is for 'scissors'\n"
        "\n"
        "   Both the player and the machine will choose one of: r, p, s.\n"
        "   If both choices were the same, then the game is a tie.\n"
        "\n"
        "   Otherwise:\n"
        "       - Paper beats rock\n"
        "       - Rock beats scissors\n"
        "       - Scissors beats paper\n"
        "\n"
        "   Other Controls:\n"
        "       g   game status\n"
        "       h   help\n"
        "       i   instructions\n"
        "       q   quit\n"
        "\n"
        "   This game is played repeatedly until q is entered\n"
        "\n"
        "   Good luck!\n"
    );
}
