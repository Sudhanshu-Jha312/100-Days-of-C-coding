# Question 13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

**Original question wording:**

> Write a program to input a year and check whether it is a leap year or not using conditional statements.

**Day:** 7

**Date:** 16 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Apply the divisible-by-400 or divisible-by-4-but-not-100 leap-year rule.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_13.c](Question_13.c).

```c
/* Original question from the reference website:
Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int year;
    if (scanf("%d", &year) != 1 || year <= 0) return 1;
    puts((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? "Leap year" : "Not a leap year");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
2024

Output:
Leap year
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  2024

  Output:
  Leap year
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1900

  Output:
  Not a leap year
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.