# Question 29: Write a program to calculate the factorial of a number.

**Original question wording:**

> Write a program to calculate the factorial of a number.

**Day:** 15

**Date:** 24 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Multiply the integers from one through n, with 0! equal to one.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_29.c](Question_29.c).

```c
/* Original question from the reference website:
Write a program to calculate the factorial of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    for (int i = 2; i <= n; i++) factorial *= (unsigned long long)i;
    printf("%llu\n", factorial);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5

Output:
120
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  5

  Output:
  120
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.