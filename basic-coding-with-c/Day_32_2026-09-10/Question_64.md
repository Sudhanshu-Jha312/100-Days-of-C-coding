# Question 64: Find the digit that occurs the most times in an integer number.

**Original question wording:**

> Find the digit that occurs the most times in an integer number.

**Day:** 32

**Date:** 10 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Extract decimal digits and count occurrences in ten counters, choosing the most frequent digit.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_64.c](Question_64.c).

```c
/* Original question from the reference website:
Find the digit that occurs the most times in an integer number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number;
    int frequency[10] = {0}, best = 0;
    if (scanf("%lld", &number) != 1) return 1;
    if (number < 0) number = -number;
    do { frequency[number % 10]++; number /= 10; } while (number > 0);
    for (int digit = 1; digit < 10; digit++) if (frequency[digit] > frequency[best]) best = digit;
    printf("Most frequent digit = %d\n", best);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
112233

Output:
Most frequent digit = 1
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  112233

  Output:
  Most frequent digit = 1
```
- **Boundary/special case — executed**:

  ```text
  Input:
  7

  Output:
  Most frequent digit = 7
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.