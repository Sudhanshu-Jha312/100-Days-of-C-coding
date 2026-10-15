/* Original question from the reference website:
Enum: Define a struct with enum Gender and print person's gender.
*/
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };
struct Person { enum Gender gender; };

int main(void) {
    char input[16];
    struct Person person;
    if (scanf("%15s", input) != 1) return 1;
    if (strcmp(input, "MALE") == 0) person.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0) person.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0) person.gender = OTHER;
    else return 1;
    if (person.gender == MALE) puts("Male");
    else if (person.gender == FEMALE) puts("Female");
    else puts("Other");
    return 0;
}
