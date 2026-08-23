# Question 27: Write a program to print the sum of the first n odd numbers.

**Original question wording:**

> Write a program to print the sum of the first n odd numbers.

**Day:** 14

**Date:** 23 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Add the first n odd numbers in a loop.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_27.c](Question_27.c).

```c
/* Original question from the reference website:
Write a program to print the sum of the first n odd numbers.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    long long sum = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (int i = 1; i <= n; i++) sum += 2LL * i - 1;
    printf("Sum = %lld\n", sum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
4

Output:
Sum = 16
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  4

  Output:
  Sum = 16
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Sum = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.