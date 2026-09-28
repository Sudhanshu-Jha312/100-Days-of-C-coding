# Question 99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

**Original question wording:**

> Change the date format from dd/04/yyyy to dd-Apr-yyyy.

**Day:** 50

**Date:** 28 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Read the day, month, and year, verify April, then print the abbreviated month format.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_99.c](Question_99.c).

```c
/* Original question from the reference website:
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int day, month, year;
    if (scanf("%d/%d/%d", &day, &month, &year) != 3 || day < 1 || day > 30 || month != 4 || year < 0) return 1;
    printf("%02d-Apr-%04d\n", day, year);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
09/04/2026

Output:
09-Apr-2026
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  09/04/2026

  Output:
  09-Apr-2026
```
- **Boundary/special case — executed**:

  ```text
  Input:
  01/04/2024

  Output:
  01-Apr-2024
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.