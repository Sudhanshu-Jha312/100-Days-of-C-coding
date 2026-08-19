# Question 19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

**Original question wording:**

> Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

**Day:** 10

**Date:** 19 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** First validate the triangle inequality, then compare its side lengths.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_19.c](Question_19.c).

```c
/* Original question from the reference website:
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        puts("Invalid triangle");
        return 0;
    }
    if (a == b && b == c) puts("Equilateral");
    else if (a == b || b == c || a == c) puts("Isosceles");
    else puts("Scalene");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
3 3 5

Output:
Isosceles
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  3 3 5

  Output:
  Isosceles
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1 2 3

  Output:
  Invalid triangle
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.