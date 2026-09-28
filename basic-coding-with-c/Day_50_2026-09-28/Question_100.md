# Question 100: Print all sub-strings of a string.

**Original question wording:**

> Print all sub-strings of a string.

**Day:** 50

**Date:** 28 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use two nested loops to print every start-to-end substring.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_100.c](Question_100.c).

```c
/* Original question from the reference website:
Print all sub-strings of a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[500];
    if (!fgets(text, sizeof text, stdin)) return 1;
    size_t length = strcspn(text, "\n");
    for (size_t start = 0; start < length; start++)
        for (size_t end = start; end < length; end++) {
            for (size_t i = start; i <= end; i++) putchar(text[i]);
            putchar('\n');
        }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
abc

Output:
a
ab
abc
b
bc
c
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  abc

  Output:
  a
  ab
  abc
  b
  bc
  c
```
- **Boundary/special case — executed**:

  ```text
  Input:
  a

  Output:
  a
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.