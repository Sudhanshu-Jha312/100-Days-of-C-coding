# Question 2: Write a program to input two numbers and display their sum, difference, product, and quotient.

**Original question wording:**

> Write a program to input two numbers and display their sum, difference, product, and quotient.

**Day:** 1

**Date:** 10 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Calculate each arithmetic operation and guard division by zero.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_02.c](Question_02.c).

```c
/* Original question from the reference website:
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2) return 1;
    if (b == 0.0) {
        printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nQuotient = undefined\n", a + b, a - b, a * b);
    } else {
        printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\nQuotient = %.2f\n", a + b, a - b, a * b, a / b);
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
10 4

Output:
Sum = 14.00
Difference = 6.00
Product = 40.00
Quotient = 2.50
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  10 4

  Output:
  Sum = 14.00
  Difference = 6.00
  Product = 40.00
  Quotient = 2.50
```
- **Boundary/special case — executed**:

  ```text
  Input:
  5 0

  Output:
  Sum = 5.00
  Difference = 5.00
  Product = 0.00
  Quotient = undefined
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.