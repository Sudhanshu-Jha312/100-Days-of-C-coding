# Question 39: Write a program to find the product of odd digits of a number.

**Original question wording:**

> Write a program to find the product of odd digits of a number.

**Day:** 20

**Date:** 29 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Extract each decimal digit and multiply only the odd digits.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_39.c](Question_39.c).

```c
/* Original question from the reference website:
Write a program to find the product of odd digits of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long n, product = 1;
    int count = 0;
    if (scanf("%lld", &n) != 1) return 1;
    if (n < 0) n = -n;
    while (n > 0) { int digit = (int)(n % 10); if (digit % 2 != 0) { product *= digit; count++; } n /= 10; }
    if (count == 0) puts("No odd digits");
    else printf("Product of odd digits = %lld\n", product);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
12345

Output:
Product of odd digits = 15
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  12345

  Output:
  Product of odd digits = 15
```
- **Boundary/special case — executed**:

  ```text
  Input:
  246

  Output:
  No odd digits
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.