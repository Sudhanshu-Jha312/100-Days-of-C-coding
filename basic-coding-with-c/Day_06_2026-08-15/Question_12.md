# Question 12: Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.

**Original question wording:**

> Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.

**Day:** 6

**Date:** 15 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare the value with zero using if/else branches.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_12.c](Question_12.c).

```c
/* Original question from the reference website:
Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int number;
    if (scanf("%d", &number) != 1) return 1;
    if (number > 0) puts("Positive");
    else if (number < 0) puts("Negative");
    else puts("Zero");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
0

Output:
Zero
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  0

  Output:
  Zero
```
- **Boundary/special case — executed**:

  ```text
  Input:
  -1

  Output:
  Negative
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.