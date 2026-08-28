# Question 37: Write a program to find the LCM of two numbers.

**Original question wording:**

> Write a program to find the LCM of two numbers.

**Day:** 19

**Date:** 28 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Find the GCD with Euclid's algorithm, then calculate |a × b| / GCD.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_37.c](Question_37.c).

```c
/* Original question from the reference website:
Write a program to find the LCM of two numbers.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long a, b, x, y;
    if (scanf("%lld %lld", &a, &b) != 2) return 1;
    x = a < 0 ? -a : a; y = b < 0 ? -b : b;
    long long original_x = x, original_y = y;
    while (y != 0) { long long remainder = x % y; x = y; y = remainder; }
    if (original_x == 0 || original_y == 0) puts("LCM = 0");
    else printf("LCM = %lld\n", (original_x / x) * original_y);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
12 18

Output:
LCM = 36
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  12 18

  Output:
  LCM = 36
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0 5

  Output:
  LCM = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.