# Question 11: Write a program to input an integer and check whether it is even or odd using ifâ€“else.

**Original question wording:**

> Write a program to input an integer and check whether it is even or odd using ifâ€“else.

**Day:** 6

**Date:** 15 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Check the remainder after division by two.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_11.c](Question_11.c).

```c
/* Original question from the reference website:
Write a program to input an integer and check whether it is even or odd using ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int number;
    if (scanf("%d", &number) != 1) return 1;
    printf("%s\n", number % 2 == 0 ? "Even" : "Odd");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
4

Output:
Even
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  4

  Output:
  Even
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Even
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.