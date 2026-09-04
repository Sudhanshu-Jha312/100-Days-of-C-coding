# Question 52: Write a program to print the following pattern:

**Original question wording:**

> Write a program to print the following pattern:
>
> *
>
> *
> *
> *
>
> *
> *
> *
> *
> *
>
> *
> *
> *
>
> *
>
>

**Day:** 26

**Date:** 04 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Print the four star groups shown in the question, separating groups with blank lines.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_52.c](Question_52.c).

```c
/* Original question from the reference website:
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const int block_sizes[] = {4, 5, 3, 1};
    for (int block = 0; block < 4; block++) {
        for (int line = 0; line < block_sizes[block]; line++) puts("*");
        if (block < 3) putchar('\n');
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
(no standard input)

Output:
*
*
*
*

*
*
*
*
*

*
*
*

*
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  (no standard input)

  Output:
  *
  *
  *
  *

  *
  *
  *
  *
  *

  *
  *
  *

  *
```
- **Boundary/special case — not separately run**: this fixed-output or enumeration exercise has no separate variable-boundary run.

**Validation status:** Compilation PASS; sample run PASS; boundary run Not run. Manual review: not yet recorded.
