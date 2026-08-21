/* Original question from the reference website:
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at â‚¹5/unit
Next 100 units at â‚¹7/unit
Next 100 units at â‚¹10/unit
Above at â‚¹12/unit
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int units;
    if (scanf("%d", &units) != 1 || units < 0) return 1;
    int bill = (units < 100 ? units : 100) * 5;
    if (units > 100) bill += (units < 200 ? units - 100 : 100) * 7;
    if (units > 200) bill += (units < 300 ? units - 200 : 100) * 10;
    if (units > 300) bill += (units - 300) * 12;
    printf("Bill = Rs.%d\n", bill);
    return 0;
}
