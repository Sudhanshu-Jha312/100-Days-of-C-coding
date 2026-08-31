# Question 43: Write a program to check if a number is a strong number.

**Original question wording:**

> Write a program to check if a number is a strong number.

**Day:** 22

**Date:** 31 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Calculate each digit's factorial, add those factorials, and compare the sum with the input.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_43.c](Question_43.c).

```c
/* Original question from the reference website:
Write a program to check if a number is a strong number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, sum = 0;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    value = n;
    do {
        int digit = value % 10, factorial = 1;
        for (int i = 2; i <= digit; i++) factorial *= i;
        sum += factorial;
        value /= 10;
    } while (value > 0);
    puts(sum == n ? "Strong number" : "Not a strong number");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
145

Output:
Strong number
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  145

  Output:
  Strong number
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Not a strong number
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.