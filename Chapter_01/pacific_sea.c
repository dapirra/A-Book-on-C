/* Output:

The Pacific Sea covers an area of 2337 square kilometers.
In other units of measure this is:

         5.7748528e+05 acres
         9.0232074e+02 square miles
         2.5155259e+10 square feet
         3.6223572e+12 square inches

*/

/* Measuring the Pacific Sea. */

#include "pacific_sea.h"

int main(void) {
    const int pacific_sea = AREA; /* in sq kilometers */
    double acres, sq_miles, sq_feet, sq_inches;

    printf("\nThe Pacific Sea covers an area");
    printf(" of %d square kilometers.\n", pacific_sea);

    sq_miles = SQ_MILES_PER_SQ_KILOMETER * pacific_sea;
    sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
    sq_inches = SQ_INCHES_PER_SQ_FOOT * sq_feet;
    acres = ACRES_PRE_SQ_MILE * sq_miles;

    printf("In other units of measure this is:\n\n");
    printf("%22.7e acres\n", acres);
    printf("%22.7e square miles\n", sq_miles);
    printf("%22.7e square feet\n", sq_feet);
    printf("%22.7e square inches\n\n", sq_inches);

    return 0;
}
