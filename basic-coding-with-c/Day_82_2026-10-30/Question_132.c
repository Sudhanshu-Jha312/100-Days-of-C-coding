/* Original question from the reference website:
Enum: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. Read enum name.
*/
#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    char name[16];
    enum TrafficLight light;
    if (scanf("%15s", name) != 1) return 1;
    if (strcmp(name, "RED") == 0) light = RED;
    else if (strcmp(name, "YELLOW") == 0) light = YELLOW;
    else if (strcmp(name, "GREEN") == 0) light = GREEN;
    else {
        fputs("Error: unknown traffic light.\n", stderr);
        return 1;
    }
    switch (light) {
        case RED: puts("Stop"); break;
        case YELLOW: puts("Wait"); break;
        case GREEN: puts("Go"); break;
    }
    return 0;
}
