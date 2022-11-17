/* Compute the next day */

#include <assert.h>
enum day {
    sun, mon, tue, wed, thr, fri, sat
};

typedef enum day day; /* the usual typedef trick */

day find_next_day(day d) {
    day next_day;

    switch (d) {
    case sun:
        next_day = mon;
        break;
    case mon:
        next_day = tue;
        break;
    case tue:
        next_day = wed;
        break;
    case wed:
        next_day = thr;
        break;
    case thr:
        next_day = fri;
        break;
    case fri:
        next_day = sat;
        break;
    case sat:
        next_day = sun;
        break;
    }

    return next_day;
}

/* Compute the next day with a cast */

day find_next_day_cast(day d) {
    assert((int) d >= 0 && (int) d < 7);
    return ((day)(((int) d + 1) % 7));
}
