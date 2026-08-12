# Question 5: Write a program to convert temperature from Celsius to Fahrenheit.

**Original question wording:**

> Write a program to convert temperature from Celsius to Fahrenheit.

**Day:** 3

**Date:** 12 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Apply Fahrenheit = Celsius × 9/5 + 32.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_05.c](Question_05.c).

```c
/* Original question from the reference website:
Write a program to convert temperature from Celsius to Fahrenheit.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double celsius;
    if (scanf("%lf", &celsius) != 1) return 1;
    printf("Fahrenheit = %.2f\n", celsius * 9.0 / 5.0 + 32.0);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
25

Output:
Fahrenheit = 77.00
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  25

  Output:
  Fahrenheit = 77.00
```
- **Boundary/special case — executed**:

  ```text
  Input:
  -40

  Output:
  Fahrenheit = -40.00
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.