/*
 *--------------------------------------
 * Program Name: MEMTI
 * Author: Cassaundra Smith <cass@cassaundra.io>
 * License: MIT
 * Description: Intelligent flashcard program on the TI-84 Plus CE
 *--------------------------------------
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void) {
    /* Seed for random number generation */
    srand(rtc_Time());
}
