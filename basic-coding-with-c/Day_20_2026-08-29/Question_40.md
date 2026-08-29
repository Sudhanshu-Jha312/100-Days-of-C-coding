# Question 40: Write a program to find the 1â€™s complement of a binary number and print it.

**Original question wording:**

> Write a program to find the 1â€™s complement of a binary number and print it.

**Day:** 20

**Date:** 29 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Validate each binary digit and replace every zero by one and every one by zero.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_40.c](Question_40.c).

```c
/* Original question from the reference website:
Write a program to find the 1â€™s complement of a binary number and print it.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char binary[256];
    if (scanf("%255s", binary) != 1) return 1;
    for (size_t i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') { puts("Invalid binary number"); return 1; }
        binary[i] = binary[i] == '0' ? '1' : '0';
    }
    printf("%s\n", binary);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
101100

Output:
010011
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  101100

  Output:
  010011
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1

  Output:
  0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.