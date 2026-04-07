#include <stdio.h>

typedef enum {
    DAY_SUNDAY = 0,
    DAY_MONDAY,
    DAY_TUESDAY,
    DAY_WEDNESDAY,
    DAY_THURSDAY,
    DAY_FRIDAY,
    DAY_SATURDAY
} DayOfWeek;

const char *day_to_string(DayOfWeek day) {
    switch(day) {
        case DAY_SUNDAY:
            return "Sunday";
        case DAY_MONDAY:
            return "Monday";
        case DAY_TUESDAY:
            return "Tuesday";
        case DAY_WEDNESDAY:
            return "Wednesday";
        case DAY_THURSDAY:
            return "Thursday";
        case DAY_FRIDAY:
            return "Friday";
        case DAY_SATURDAY:
            return "Saturday";
        default:
            return "Invalid day";
    }
}

int main(void) {
    DayOfWeek today = DAY_WEDNESDAY;

    printf("Today is %s\n", day_to_string(today));
    // output: Today is Wednesday

    printf("Numeric value of DAY_WEDNESDAY = %d\n", (int)DAY_WEDNESDAY);
    // output: Numeric value of DAY_WEDNESDAY = 3

    return 0;
}
