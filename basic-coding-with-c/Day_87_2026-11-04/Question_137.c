/* Original question from the reference website:
Enum: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/
#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    char input[16];
    enum Role role;
    if (scanf("%15s", input) != 1) return 1;
    if (strcmp(input, "ADMIN") == 0) role = ADMIN;
    else if (strcmp(input, "USER") == 0) role = USER;
    else if (strcmp(input, "GUEST") == 0) role = GUEST;
    else return 1;
    switch (role) {
        case ADMIN: puts("Welcome Admin!"); break;
        case USER: puts("Welcome User!"); break;
        case GUEST: puts("Welcome Guest!"); break;
    }
    return 0;
}
