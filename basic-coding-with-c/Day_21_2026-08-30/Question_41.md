# Question 41: Write a program to swap the first and last digit of a number.

**Original question wording:**

> Write a program to swap the first and last digit of a number.

**Day:** 21

**Date:** 30 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Separate the first and last digits by place value, then reconstruct the number with them exchanged.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_41.c](Question_41.c).

```c
/* Original question from the reference website:
Write a program to swap the first and last digit of a number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long number, value, first, last, place = 1;
    if (scanf("%lld", &number) != 1) return 1;
    value = number < 0 ? -number : number;
    last = value % 10;
    if (value < 10) { printf("%lld\n", number); return 0; }
    while (value >= 10) { value /= 10; place *= 10; }
    first = value;
    value = number < 0 ? -number : number;
    long long swapped = last * place + (value % place - last) + first;
    printf("%s%lld\n", number < 0 ? "-" : "", swapped);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
12345

Output:
52341
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
  52341
```
- **Boundary/special case — executed**:

  ```text
  Input:
  7

  Output:
  7
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.