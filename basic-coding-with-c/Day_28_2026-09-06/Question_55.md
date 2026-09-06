# Question 55: Write a program to print all the prime numbers from 1 to n.

**Original question wording:**

> Write a program to print all the prime numbers from 1 to n.

**Day:** 28

**Date:** 06 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Test each integer from two to n for divisors and print the primes.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_55.c](Question_55.c).

```c
/* Original question from the reference website:
Write a program to print all the prime numbers from 1 to n.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) return 1;
    for (int value = 2; value <= n; value++) {
        int prime = 1;
        for (int divisor = 2; divisor <= value / divisor; divisor++)
            if (value % divisor == 0) { prime = 0; break; }
        if (prime) printf("%d ", value);
    }
    putchar('\n');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
20

Output:
2 3 5 7 11 13 17 19 ```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  20

  Output:
  2 3 5 7 11 13 17 19
```
- **Boundary/special case — executed**:

  ```text
  Input:
  2

  Output:
  2
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.