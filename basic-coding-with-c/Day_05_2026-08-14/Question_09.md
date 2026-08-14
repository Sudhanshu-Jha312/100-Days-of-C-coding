# Question 9: Write a program to calculate simple and compound interest for given principal, rate, and time.

**Original question wording:**

> Write a program to calculate simple and compound interest for given principal, rate, and time.

**Day:** 5

**Date:** 14 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use the simple-interest formula and the annual compound-interest formula.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_09.c](Question_09.c).

```c
/* Original question from the reference website:
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double principal, rate, time;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 || principal < 0 || rate < 0 || time < 0) return 1;
    double simple = principal * rate * time / 100.0;
    double compound = principal * (pow(1.0 + rate / 100.0, time) - 1.0);
    printf("Simple Interest = %.2f\nCompound Interest = %.2f\n", simple, compound);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
1000 5 2

Output:
Simple Interest = 100.00
Compound Interest = 102.50
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  1000 5 2

  Output:
  Simple Interest = 100.00
  Compound Interest = 102.50
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0 0 0

  Output:
  Simple Interest = 0.00
  Compound Interest = 0.00
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.