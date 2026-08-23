# Question 28: Write a program to print the product of even numbers from 1 to n.

**Original question wording:**

> Write a program to print the product of even numbers from 1 to n.

**Day:** 14

**Date:** 23 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Multiply each even number from two through n.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_28.c](Question_28.c).

```c
/* Original question from the reference website:
Write a program to print the product of even numbers from 1 to n.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, found = 0;
    long long product = 1;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    for (int i = 2; i <= n; i += 2) { product *= i; found = 1; }
    printf("Product = %lld%s\n", product, found ? "" : " (no even numbers; empty product is 1)");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
10

Output:
Product = 3840
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
  Product = 3840
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1

  Output:
  Product = 1 (no even numbers; empty product is 1)
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.