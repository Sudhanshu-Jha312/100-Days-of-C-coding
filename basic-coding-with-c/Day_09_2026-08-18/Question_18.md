# Question 18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:

**Original question wording:**

> Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
> 90-100: Grade A
> 80-89: Grade B
> 70-79: Grade C
> 60-69: Grade D
> below 60: Grade F.

**Day:** 9

**Date:** 18 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Select the grade whose percentage interval contains the input.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_18.c](Question_18.c).

```c
/* Original question from the reference website:
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double percentage;
    if (scanf("%lf", &percentage) != 1 || percentage < 0 || percentage > 100) return 1;
    char grade = percentage >= 90 ? 'A' : percentage >= 80 ? 'B' : percentage >= 70 ? 'C' : percentage >= 60 ? 'D' : 'F';
    printf("Grade %c\n", grade);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
85

Output:
Grade B
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  85

  Output:
  Grade B
```
- **Boundary/special case — executed**:

  ```text
  Input:
  59

  Output:
  Grade F
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.