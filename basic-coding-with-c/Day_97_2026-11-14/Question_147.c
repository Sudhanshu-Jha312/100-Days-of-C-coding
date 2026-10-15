/* Original question from the reference website:
Store employee data in a binary file using fwrite() and read using fread(). Employee details entered and stored in file -> display employee data read from file. Ensure file error handling and explain binary file format.
*/
#include <stdio.h>

struct Employee { char name[100]; int id; double salary; };

int main(void) {
    struct Employee employee, loaded;
    if (scanf("%99s%d%lf", employee.name, &employee.id, &employee.salary) != 3)
        return 1;
    FILE *file = fopen("employee.dat", "wb");
    if (!file) {
        perror("Could not open employee.dat for writing");
        return 1;
    }
    int ok = fwrite(&employee, sizeof employee, 1, file) == 1;
    if (fclose(file) != 0) ok = 0;
    if (!ok) {
        fputs("Error: could not write employee.dat\n", stderr);
        return 1;
    }
    file = fopen("employee.dat", "rb");
    if (!file) {
        perror("Could not open employee.dat for reading");
        return 1;
    }
    ok = fread(&loaded, sizeof loaded, 1, file) == 1;
    if (fclose(file) != 0) ok = 0;
    if (!ok) {
        fputs("Error: could not read a complete employee record.\n", stderr);
        return 1;
    }
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           loaded.name, loaded.id, loaded.salary);
    return 0;
}
