/* Original question from the reference website:
Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double cost, selling;
    if (scanf("%lf %lf", &cost, &selling) != 2 || cost <= 0) return 1;
    if (selling > cost) printf("Profit = %.2f%%\n", (selling - cost) * 100 / cost);
    else if (selling < cost) printf("Loss = %.2f%%\n", (cost - selling) * 100 / cost);
    else puts("No profit, no loss");
    return 0;
}
