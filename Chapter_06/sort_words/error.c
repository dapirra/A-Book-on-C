#include "sort.h"

void error_exit_calloc_failed(void) {
    printf(
        "%s\n",
        "ERROR: The call to calloc() failed to\n"
        "       allocate the requested memory.\n"
    );
    exit(1);
}

void error_exit_too_many_words(void) {
    printf(
        "ERROR: At most %d words can be sorted.\n",
        N
    );
    exit(1);
}

void error_exit_word_too_long(void) {
    printf(
        "%s%d%s\n",
        "ERROR: A word with more than ", MAXWORD, "\n"
        "       characters was not found.\n"
    );
    exit(1);
}
