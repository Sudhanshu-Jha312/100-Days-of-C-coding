# Question 20: Write a program to display the day of the week based on a number (1â€“7) using switch-case.

**Original question wording:**

> Write a program to display the day of the week based on a number (1â€“7) using switch-case.

**Day:** 10

**Date:** 19 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use a switch statement to map numbers 1 through 7 to weekdays.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_20.c](Question_20.c).

```c
/* Original question from the reference website:
Write a program to display the day of the week based on a number (1â€“7) using switch-case.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int day;
    if (scanf("%d", &day) != 1) return 1;
    const char *names[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    switch (day) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7: puts(names[day - 1]); break;
        default: puts("Invalid day");
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
3

Output:
Wednesday
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  3

  Output:
  Wednesday
```
- **Boundary/special case — executed**:

  ```text
  Input:
  8

  Output:
  Invalid day
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.