/* Original question from the reference website:
Write a program to calculate library fine based on late days as follows:
First 5 days late: â‚¹2/day
Next 5 days late: â‚¹4/day
Next 20 days days late: â‚¹6/day
More than 30 days: Membership Cancelled.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int late;
    if (scanf("%d", &late) != 1 || late < 0) return 1;
    if (late > 30) puts("Membership Cancelled");
    else {
        int fine = (late < 5 ? late : 5) * 2;
        if (late > 5) fine += (late < 10 ? late - 5 : 5) * 4;
        if (late > 10) fine += (late - 10) * 6;
        printf("Fine = Rs.%d\n", fine);
    }
    return 0;
}
