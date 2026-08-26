# Question 34: Write a program to check if a number is prime.

**Original question wording:**

> Write a program to check if a number is prime.

**Day:** 17

**Date:** 26 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Try divisors up to the square root and reject the number if any divides it.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_34.c](Question_34.c).

```c
/* Original question from the reference website:
Write a program to check if a number is prime.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, prime = 1;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 2) prime = 0;
    for (int i = 2; prime && i <= n / i; i++) if (n % i == 0) prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
29

Output:
Prime
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  29

  Output:
  Prime
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1

  Output:
  Not prime
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.