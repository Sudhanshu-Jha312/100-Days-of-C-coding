# Question 16: Write a program to input three numbers and find the largest among them using ifâ€“else.

**Original question wording:**

> Write a program to input three numbers and find the largest among them using ifâ€“else.

**Day:** 8

**Date:** 17 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare the three values and retain the greatest.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_16.c](Question_16.c).

```c
/* Original question from the reference website:
Write a program to input three numbers and find the largest among them using ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a, b, c, largest;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    largest = a > b ? a : b;
    if (c > largest) largest = c;
    printf("Largest = %d\n", largest);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
4 9 2

Output:
Largest = 9
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  4 9 2

  Output:
  Largest = 9
```
- **Boundary/special case — executed**:

  ```text
  Input:
  7 7 3

  Output:
  Largest = 7
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.