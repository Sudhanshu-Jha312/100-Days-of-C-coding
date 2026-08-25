# Question 31: Write a program to take a number as input and print its equivalent binary representation.

**Original question wording:**

> Write a program to take a number as input and print its equivalent binary representation.

**Day:** 16

**Date:** 25 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Repeatedly divide by two, save each remainder, then print the remainders in reverse order.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_31.c](Question_31.c).

```c
/* Original question from the reference website:
Write a program to take a number as input and print its equivalent binary representation.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    unsigned int number;
    char bits[sizeof(number) * 8 + 1];
    int length = 0;
    if (scanf("%u", &number) != 1) return 1;
    do { bits[length++] = (char)('0' + number % 2); number /= 2; } while (number > 0);
    while (length > 0) putchar(bits[--length]);
    putchar('\n');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
13

Output:
1101
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  13

  Output:
  1101
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.