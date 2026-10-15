/* Original question from the reference website:
Enum: Print all enum names and integer values using a loop. No input.
*/
#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (int color = RED; color <= GREEN; ++color)
        printf("%s=%d\n", names[color], color);
    return 0;
}
