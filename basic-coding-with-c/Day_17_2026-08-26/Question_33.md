# Question 33: Write a program to check if a number is an Armstrong number.

**Original question wording:**

> Write a program to check if a number is an Armstrong number.

**Day:** 17

**Date:** 26 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Raise each decimal digit to the number of digits and compare their sum with the input.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_33.c](Question_33.c).

```c
/* Original question from the reference website:
Write a program to check if a number is an Armstrong number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number, value, original;
    int digits = 0;
    if (scanf("%lld", &number) != 1) return 1;
    value = number;
    do { digits++; value /= 10; } while (value != 0);
    original = value = number < 0 ? -number : number;
    long long sum = 0;
    while (value > 0) {
        int digit = (int)(value % 10);
        long long power = 1;
        for (int i = 0; i < digits; i++) power *= digit;
        sum += power;
        value /= 10;
    }
    puts(number >= 0 && sum == original ? "Armstrong number" : "Not an Armstrong number");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
153

Output:
Armstrong number
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  153

  Output:
  Armstrong number
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Armstrong number
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.