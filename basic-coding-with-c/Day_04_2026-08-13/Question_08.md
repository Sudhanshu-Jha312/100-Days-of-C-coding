# Question 8: Write a program to find and display the sum of the first n natural numbers.

**Original question wording:**

> Write a program to find and display the sum of the first n natural numbers.

**Day:** 4

**Date:** 13 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use the arithmetic-series formula n(n + 1)/2.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_08.c](Question_08.c).

```c
/* Original question from the reference website:
Write a program to find and display the sum of the first n natural numbers.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 0) return 1;
    printf("Sum = %lld\n", n * (n + 1) / 2);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
10

Output:
Sum = 55
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  10

  Output:
  Sum = 55
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Sum = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.