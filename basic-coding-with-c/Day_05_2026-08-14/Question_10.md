# Question 10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

**Original question wording:**

> Write a program to input time in seconds and convert it to hours:minutes:seconds format.

**Day:** 5

**Date:** 14 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Divide total seconds into hours, remaining minutes, and remaining seconds.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_10.c](Question_10.c).

```c
/* Original question from the reference website:
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long seconds;
    if (scanf("%lld", &seconds) != 1 || seconds < 0) return 1;
    printf("%02lld:%02lld:%02lld\n", seconds / 3600, seconds / 60 % 60, seconds % 60);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
3661

Output:
01:01:01
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  3661

  Output:
  01:01:01
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  00:00:00
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.