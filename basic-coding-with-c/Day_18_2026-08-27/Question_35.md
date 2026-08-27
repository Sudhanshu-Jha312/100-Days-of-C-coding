# Question 35: Write a program to print all factors of a given number.

**Original question wording:**

> Write a program to print all factors of a given number.

**Day:** 18

**Date:** 27 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Check each positive integer through n and print those that divide n evenly.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_35.c](Question_35.c).

```c
/* Original question from the reference website:
Write a program to print all factors of a given number.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (int i = 1; i <= n; i++) if (n % i == 0) printf("%d%c", i, i == n ? '\n' : ' ');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
12

Output:
1 2 3 4 6 12
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  12

  Output:
  1 2 3 4 6 12
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1

  Output:
  1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.