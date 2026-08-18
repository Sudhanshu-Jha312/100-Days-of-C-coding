# Question 17: Write a program to find the roots of a quadratic equation and categorize them.

**Original question wording:**

> Write a program to find the roots of a quadratic equation and categorize them.

**Day:** 9

**Date:** 18 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Calculate the discriminant and use it to select the real or complex root formula.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_17.c](Question_17.c).

```c
/* Original question from the reference website:
Write a program to find the roots of a quadratic equation and categorize them.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double a, b, c, discriminant;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) return 1;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        printf("Two distinct real roots: %.2f %.2f\n", (-b + sqrt(discriminant)) / (2 * a), (-b - sqrt(discriminant)) / (2 * a));
    } else if (discriminant == 0) {
        printf("One repeated real root: %.2f\n", -b / (2 * a));
    } else {
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", -b / (2 * a), sqrt(-discriminant) / (2 * a), -b / (2 * a), sqrt(-discriminant) / (2 * a));
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
1 -3 2

Output:
Two distinct real roots: 2.00 1.00
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  1 -3 2

  Output:
  Two distinct real roots: 2.00 1.00
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1 2 1

  Output:
  One repeated real root: -1.00
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.