/* Original question from the reference website:
Create Employee structure with nested Date structure for joining date and print details.
*/
#include <stdio.h>

struct Date { int day; int month; int year; };
struct Employee { char name[100]; int id; struct Date joining_date; };

int main(void) {
    struct Employee employee;
    if (scanf("%99s%d%d%d%d", employee.name, &employee.id,
              &employee.joining_date.day, &employee.joining_date.month,
              &employee.joining_date.year) != 5) return 1;
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           employee.name, employee.id, employee.joining_date.day,
           employee.joining_date.month, employee.joining_date.year);
    return 0;
}
