# Question 38: Write a program to find the sum of digits of a number.

**Original question wording:**

> Write a program to find the sum of digits of a number.

**Day:** 19

**Date:** 28 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Extract each decimal digit and add it to a running total.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_38.c](Question_38.c).

```c
/* Original question from the reference website:
Write a program to find the sum of digits of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n, sum = 0;
    if (scanf("%lld", &n) != 1) return 1;
    if (n < 0) n = -n;
    do { sum += n % 10; n /= 10; } while (n > 0);
    printf("Sum of digits = %lld\n", sum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
-1234

Output:
Sum of digits = 10
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  -1234

  Output:
  Sum of digits = 10
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Sum of digits = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.